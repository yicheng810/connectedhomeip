/*
 * $ Copyright 2016-YEAR Cypress Semiconductor $
 */

#include <app-common/zap-generated/attributes/Accessors.h>
#include <platform/CHIPDeviceLayer.h>
#include "LightingManager.h"

using namespace chip;
using namespace chip::app::Clusters;
using namespace chip::DeviceLayer;

void emberAfBasicClusterInitCallback(EndpointId endpoint)
{
    uint16_t year;
    uint8_t month;
    uint8_t dayOfMonth;
    char cString[16] = "00000000";

    if (ConfigurationMgr().GetManufacturingDate(year, month, dayOfMonth) == CHIP_NO_ERROR)
    {
        snprintf(cString, sizeof(cString), "%04u%02u%02u", year, month, dayOfMonth);
    }
    Basic::Attributes::ManufacturingDate::Set(endpoint, CharSpan(cString));
}

void MatterPostAttributeChangeCallback(const app::ConcreteAttributePath & attributePath, uint8_t mask, uint8_t type,
                                       uint16_t size, uint8_t * value)

{
    switch (attributePath.mClusterId)
    {
    case OnOff::Id:
        if (attributePath.mAttributeId == OnOff::Attributes::OnOff::Id)
        {
            printf("ZCL OnOff -> %u\n", *value);
            LightMgr().InitiateAction(LightingManager::ACTOR_ZCL_CMD,
                    (*value == 0) ? LightingManager::OFF_ACTION : LightingManager::ON_ACTION, *value);
            return;
        }
        break;
    case LevelControl::Id:
        if (attributePath.mAttributeId == LevelControl::Attributes::CurrentLevel::Id)
        {
            printf("ZCL CurrentLevel -> %u\n", *value);
            LightMgr().InitiateAction(LightingManager::ACTOR_ZCL_CMD, LightingManager::LEVEL_ACTION, *value);
            return;
        }
        break;
    default:
        printf("Unhandled cluster ID: 0x%04lx\n", attributePath.mClusterId);
        return;
    }

    printf("ERROR clusterId: 0x%04lx, unknown attribute ID: 0x%04lx\n", attributePath.mClusterId, attributePath.mAttributeId);
}

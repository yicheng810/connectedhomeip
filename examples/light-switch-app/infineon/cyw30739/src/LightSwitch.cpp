/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *    Copyright (c) 2019 Google LLC.
 *    Copyright 2021, Cypress Semiconductor Corporation (an Infineon company)
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/***********************************************************************************
 * Includes
 ***********************************************************************************/
#include <App.h>
#include <BindingHandler.h>
#include <LightSwitch.h>
#include <app-common/zap-generated/attributes/Accessors.h>
#include <app/clusters/switch-server/switch-server.h>
#include <app/util/binding-table.h>
#include <controller/InvokeInteraction.h>

/***********************************************************************************
 * Parameters
 ***********************************************************************************/
using namespace chip;
using namespace chip::app;
using namespace chip::app::Clusters;

/***********************************************************************************
 * Functions
 ***********************************************************************************/
void LightSwitch::Init(chip::EndpointId aLightDimmerSwitchEndpoint)
{
    BindingHandler::GetInstance().Init();
    mLightSwitchEndpoint = aLightDimmerSwitchEndpoint;
}

/* Use button click event to test */
void LightSwitch::InitiateActionSwitch(Action mAction)
{
    BindingHandler::BindingData * data = Platform::New<BindingHandler::BindingData>();
    if (data)
    {
        data->EndpointId = mLightSwitchEndpoint;
        data->ClusterId  = Clusters::OnOff::Id;
        switch (mAction)
        {
        case Action::Toggle:
            data->CommandId = Clusters::OnOff::Commands::Toggle::Id;
            mStatus         = LightSwitch::Status::Toggle;
            break;
        case Action::On:
            data->CommandId = Clusters::OnOff::Commands::On::Id;
            mStatus         = LightSwitch::Status::On;
            break;
        case Action::Off:
            data->CommandId = Clusters::OnOff::Commands::Off::Id;
            mStatus         = LightSwitch::Status::Off;
            break;
        default:
            Platform::Delete(data);
            mStatus = LightSwitch::Status::Unknown;
            return;
        }
        data->IsGroup = BindingHandler::GetInstance().IsGroupBound();
        DeviceLayer::PlatformMgr().ScheduleWork(BindingHandler::SwitchWorkerHandler, reinterpret_cast<intptr_t>(data));
    }
}

/* Return the InitiateActionSwitch setting result */
LightSwitch::Status LightSwitch::GetSwitchStatus()
{
    return mStatus;
}

/* Test the function by CLI command: switch debug brightness [brightness value]  */
void LightSwitch::DimmerChangeBrightness(uint16_t kValue)
{
    static uint16_t sBrightness;

    BindingHandler::BindingData * data = Platform::New<BindingHandler::BindingData>();
    if (data)
    {
        data->EndpointId = mLightSwitchEndpoint;
        data->CommandId  = Clusters::LevelControl::Commands::MoveToLevel::Id;
        data->ClusterId  = Clusters::LevelControl::Id;
        // add to brightness vluse to change brightness after call dimmer change.
        sBrightness = kValue;
        data->Value =
            (uint8_t)(sBrightness > CHIP_DEVICE_CONFIG_BRIGHTNESS_MAXIMUM ? CHIP_DEVICE_CONFIG_BRIGHTNESS_MAXIMUM : sBrightness);
        data->IsGroup = BindingHandler::GetInstance().IsGroupBound();
        DeviceLayer::PlatformMgr().ScheduleWork(BindingHandler::SwitchWorkerHandler, reinterpret_cast<intptr_t>(data));
    }
}

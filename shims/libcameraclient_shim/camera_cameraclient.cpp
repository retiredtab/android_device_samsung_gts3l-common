/*
 * Copyright (C) 2017 TeamNexus
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "camera_cameraclient.h"

namespace android
{
    const char CameraParameters::KEY_RT_HDR[] = "rt-hdr";
    const char CameraParameters::RTHDR_AUTO[] = "auto"; // ???
    const char CameraParameters::OIS_ON_ZOOM[] = "ois-on-zoom";
    const char CameraParameters::KEY_METERING[] = "metering";
    const char CameraParameters::KEY_PHASE_AF[] = "phase-af";
    const char CameraParameters::METERING_OFF[] = "off";
    const char CameraParameters::OIS_ON_STILL[] = "ois-on-still";
    const char CameraParameters::OIS_ON_VIDEO[] = "ois-on-video";
    const char CameraParameters::METERING_SPOT[] = "spot";
    const char CameraParameters::OIS_CENTERING[] = "ois-center"; // ???
    const char CameraParameters::OIS_ON_SINE_X[] = "ois-on-sin-x";
    const char CameraParameters::OIS_ON_SINE_Y[] = "ois-on-sin-y";
    const char CameraParameters::METERING_CENTER[] = "center";
    const char CameraParameters::METERING_MATRIX[] = "matrix";
    const char CameraParameters::WHITE_BALANCE_K[] = "wb-k";
    const char CameraParameters::FOCUS_MODE_MANUAL[] = "manual";
    const char CameraParameters::KEY_OIS_SUPPORTED[] = "ois_supported";
    const char CameraParameters::KEY_WHITE_BALANCE_K[] = "wb-k";
    const char CameraParameters::KEY_SUPPORTED_RT_HDR[] = "rt-hdr-values";
    const char CameraParameters::KEY_MAX_EXPOSURE_TIME[] = "max-exposure-time";
    const char CameraParameters::KEY_MIN_EXPOSURE_TIME[] = "min-exposure-time";
    const char CameraParameters::KEY_SUPPORTED_PHASE_AF[] = "phase-af";
    const char CameraParameters::KEY_SUPPORTED_OIS_MODES[] = "ois_modes";
    const char CameraParameters::KEY_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control";
    const char CameraParameters::PIXEL_FORMAT_YUV420SP_NV21[] = "yuv420sp-nv21";
    const char CameraParameters::KEY_SUPPORTED_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control-values";
    const char CameraParameters::KEY_SUPPORTED_EFFECT_PREVIEW_FPS_RANGE[] = "preview-fps-range";
    const char CameraParameters::DRC_ON[] = "on";
    const char CameraParameters::ISO_80[] = "ISO80";
    const char CameraParameters::PAF_ON[] = "on";
    const char CameraParameters::DRC_OFF[] = "off";
    const char CameraParameters::ISO_100[] = "ISO100";
    const char CameraParameters::ISO_200[] = "ISO200";
    const char CameraParameters::ISO_400[] = "ISO400";
    const char CameraParameters::ISO_800[] = "ISO800";
    const char CameraParameters::KEY_OIS[] = "ois";
    const char CameraParameters::OIS_OFF[] = "off";
    const char CameraParameters::PAF_OFF[] = "off";
    const char CameraParameters::ISO_1600[] = "ISO1600";
    const char CameraParameters::ISO_3200[] = "ISO3200";
    const char CameraParameters::ISO_AUTO[] = "auto";
    const char CameraParameters::RTHDR_ON[] = "on";
    const char CameraParameters::RTHDR_OFF[] = "off";

    int CameraParameters::getInt64(const char *key) const { return -1; }
};


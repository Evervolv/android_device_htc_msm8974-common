/*
 * Copyright (C) 2019 The LineageOS Project
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

#include "TouchscreenGesture.h"

namespace vendor {
namespace evervolv {
namespace touch {
namespace V1_0 {
namespace implementation {

// Methods from ::vendor::evervolv::touch::V1_0::ITouchscreenGesture follow.
Return<void> TouchscreenGesture::getSupportedGestures(getSupportedGestures_cb _hidl_cb) {
    _hidl_cb(NULL);
    return Void();
}

Return<bool> TouchscreenGesture::setGestureEnabled(const ::vendor::evervolv::touch::V1_0::Gesture&,
                                                   bool) {
    return true;
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace touch
}  // namespace evervolv
}  // namespace vendor

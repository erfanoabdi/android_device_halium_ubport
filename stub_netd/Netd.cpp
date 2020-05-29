/*
 * Copyright 2020 UBports foundation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Erfan Abdi <erfanplus@gmail.com>
 */

#define LOG_TAG "android.system.net.netd@1.1-service-stub"

#include <android-base/logging.h>

#include "Netd.h"

namespace android {
namespace system {
namespace net {
namespace netd {
namespace V1_1 {
namespace implementation {

// Methods from ::android::system::net::netd::V1_0::INetd follow.
Return<void> Netd::createOemNetwork(createOemNetwork_cb _hidl_cb) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    _hidl_cb(1, 0, StatusCode::OK);
    return Void();
}

Return<StatusCode> Netd::destroyOemNetwork(uint64_t) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}


// Methods from ::android::system::net::netd::V1_1::INetd follow.
Return<StatusCode> Netd::addRouteToOemNetwork(uint64_t, const hidl_string&, const hidl_string&, const hidl_string&) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}

Return<StatusCode> Netd::removeRouteFromOemNetwork(uint64_t, const hidl_string&, const hidl_string&, const hidl_string&) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}

Return<StatusCode> Netd::addInterfaceToOemNetwork(uint64_t, const hidl_string&) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}

Return<StatusCode> Netd::removeInterfaceFromOemNetwork(uint64_t, const hidl_string&) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}

Return<StatusCode> Netd::setIpForwardEnable(bool) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}

Return<StatusCode> Netd::setForwardingBetweenInterfaces(const hidl_string&, const hidl_string&, bool) {
    // TODO implement
    LOG(INFO) << __FUNCTION__ << " Called";
    return StatusCode::OK;
}

}  // namespace implementation
}  // namespace V1_1
}  // namespace netd
}  // namespace net
}  // namespace system
}  // namespace android

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
#include <hidl/HidlTransportSupport.h>
#include "Netd.h"

using ::android::OK;
using ::android::status_t;

// libhwbinder:
using ::android::hardware::configureRpcThreadpool;
using ::android::hardware::joinRpcThreadpool;

// Generated HIDL files:
using ::android::system::net::netd::V1_1::INetd;
using ::android::system::net::netd::V1_1::implementation::Netd;

static int shutdown() {
    LOG(ERROR) << "Netd Service is shutting down.";
    return 1;
}

int main(int /* argc */, char** /* argv */) {
    status_t status;
    android::sp<INetd> service = nullptr;

    LOG(INFO) << "Netd HAL Service Stub 1.1 starting...";

    service = new Netd();
    if (service == nullptr) {
        LOG(ERROR) << "Error creating an instance of Netd HAL.  Exiting...";
        return shutdown();
    }

    configureRpcThreadpool(1, true /* callerWillJoin */);

    status = service->registerAsService();
    if (status != OK) {
        LOG(ERROR) << "Could not register service for Netd HAL (" << status << ")";
        return shutdown();
    }

    LOG(INFO) << "Netd Service started successfully.";
    joinRpcThreadpool();
    // We should not get past the joinRpcThreadpool().
    return shutdown();
}

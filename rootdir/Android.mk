LOCAL_PATH := $(call my-dir)

# Init scripts

include $(CLEAR_VARS)

include $(CLEAR_VARS)
LOCAL_MODULE       := init.halium.rc
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := etc/init.halium.rc
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/init
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := init.disabled.rc
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := etc/init.disabled.rc
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/init
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := init.vndk-26.rc
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := etc/gsi/init.vndk-26.rc
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/init/gsi
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := vndk-detect
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_SRC_FILES    := bin/vndk-detect
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := on-post-data.sh
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_SRC_FILES    := bin/on-post-data.sh
include $(BUILD_PREBUILT)

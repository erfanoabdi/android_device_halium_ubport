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

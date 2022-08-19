LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := UsePrefab

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_SRC_FILES := \
		$(subst $(LOCAL_PATH)/,, \
			$(wildcard $(LOCAL_PATH)/src/*.cpp) \
		)

include $(BUILD_SHARED_LIBRARY)
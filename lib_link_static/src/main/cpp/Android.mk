#include $(call all-subdir-makefiles)

LOCAL_PATH := $(call my-dir)

include $(LOCAL_PATH)/static/Android.mk
include $(LOCAL_PATH)/shared/Android.mk

include $(CLEAR_VARS)

LOCAL_MODULE := LinkStatic

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_SRC_FILES := \
		$(subst $(LOCAL_PATH)/,, \
			$(wildcard $(LOCAL_PATH)/src/*.cpp) \
		)

LOCAL_SHARED_LIBRARIES := Calculator

include $(BUILD_SHARED_LIBRARY)
#include $(call all-subdir-makefiles)

LOCAL_PATH := $(call my-dir)
include $(call all-makefiles-under,$(LOCAL_PATH))
#include $(LOCAL_PATH)/hello-world/hello/Android.mk
#include $(LOCAL_PATH)/hello-world/world/Android.mk
#include $(LOCAL_PATH)/hello-world/Android.mk

include $(CLEAR_VARS)

LOCAL_MODULE := LinkShared

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_SRC_FILES := \
		$(subst $(LOCAL_PATH)/,, \
			$(wildcard $(LOCAL_PATH)/src/*.cpp) \
		)

LOCAL_SHARED_LIBRARIES := HelloWorld

include $(BUILD_SHARED_LIBRARY)
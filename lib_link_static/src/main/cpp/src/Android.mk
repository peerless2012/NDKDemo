LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := LinkStatic

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

CPP_FILE_LIST := $(call all-subdir-cpp-files) \
			     $(wildcard $(LOCAL_PATH)/src/*.cpp)

LOCAL_SRC_FILES := $(CPP_FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_SHARED_LIBRARIES := Calculator

LOCAL_STATIC_LIBRARIES :=

include $(BUILD_SHARED_LIBRARY)
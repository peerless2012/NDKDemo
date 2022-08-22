LOCAL_PATH := $(call my-dir)

# use prebuilt library
# https://developer.android.com/ndk/guides/prebuilts
include $(CLEAR_VARS)
ifeq ($(NDK_DEBUG), 1)
	BUILD_TYPE := Debug
else
	BUILD_TYPE := Release
endif
PROVIDER_ROOT_PATH := ${LOCAL_PATH}/../../../../lib_module_provider
PROVIDER_SOURCE_PATH := ${PROVIDER_ROOT_PATH}/src/main/cpp
# library_jni or ndkBuild
PROVIDER_RUNTIME_PATH := ${PROVIDER_ROOT_PATH}/build/intermediates/ndkBuild/ndk$(BUILD_TYPE)/obj/local/$(TARGET_ARCH_ABI)
LOCAL_MODULE := provider-prebuilt
LOCAL_SRC_FILES := $(PROVIDER_RUNTIME_PATH)/libProvider.so
LOCAL_EXPORT_C_INCLUDES := $(PROVIDER_SOURCE_PATH)/include
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE := Beneficiary

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
$(info "LOCAL_C_INCLUDES = $(LOCAL_C_INCLUDES)")

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_SRC_FILES := \
		$(subst $(LOCAL_PATH)/,, \
			$(wildcard $(LOCAL_PATH)/src/*.cpp) \
		)

LOCAL_SHARED_LIBRARIES := provider-prebuilt

include $(BUILD_SHARED_LIBRARY)
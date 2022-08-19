/**
* @Author peerless2012
* @Email peerless2012@126.com
* @DateTime 2022/8/19 16:25
* @Version V1.0
* @Description 
*/

#ifndef NDKDEMO_PROVIDER_H
#define NDKDEMO_PROVIDER_H

#include "string"
#include "jni.h"
#include <Android/log.h>

// 这个是自定义的LOG的标识
#define TAG    "NDKDemo"
// 定义LOGD类型
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)

std::string provideModule();

#endif //NDKDEMO_PROVIDER_H

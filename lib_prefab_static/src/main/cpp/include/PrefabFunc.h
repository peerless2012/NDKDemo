/**
* @Author peerless2012
* @Email peerless2012@126.com
* @DateTime 2022/8/22 16:11
* @Version V1.0
* @Description 
*/

#ifndef NDKDEMO_PREFABFUNC_H
#define NDKDEMO_PREFABFUNC_H

#include "string"
#include "jni.h"
#include <Android/log.h>

#define TAG    "NDKDemo"

#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)

int prefabAdd(int a, int b);

#endif //NDKDEMO_PREFABFUNC_H

/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */

#include "LinkStaticMain.h"
#include <jni.h>

extern "C"
JNIEXPORT jint
JNICALL
Java_com_peerless2012_ndk_link_statics_LinkStaticTest_calculator(JNIEnv *env, jclass clazz) {
    return LinkStatic::calculator(LinkStatic::Calculator::numA(), LinkStatic::Calculator::numB());
}
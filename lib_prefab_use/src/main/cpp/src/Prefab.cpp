/**
* @Author peerless2012
* @Email peerless2012@126.com
* @DateTime 2022/8/19 16:22
* @Version V1.0
* @Description 
*/

#include "Prefab.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_peerless2012_ndk_prefab_use_PrefabTest_prefab(JNIEnv *env, jclass clazz, int a, int b) {
    std::string str = "Prefab ";
    str.append("a = " + std::to_string(a));
    str.append(", b = " + std::to_string(b));
    str.append(", add = " + std::to_string(prefabAdd(a, b)));
    str.append(", sub = " + std::to_string(prefabSub(a, b)));
    return env->NewStringUTF(str.c_str());
}
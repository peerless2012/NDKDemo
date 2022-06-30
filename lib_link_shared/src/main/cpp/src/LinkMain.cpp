
#include "LinkMain.h"

std::string LinkShared::LinkMain::sayHelloWorld() {
    return "!" + HelloWorld::helloWorld() + "!";
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_peerless2012_ndk_shared_1link_LinkSharedTest_sayHelloWorld(JNIEnv *env, jclass clazz) {
    return env->NewStringUTF(LinkShared::LinkMain::sayHelloWorld().c_str());
}
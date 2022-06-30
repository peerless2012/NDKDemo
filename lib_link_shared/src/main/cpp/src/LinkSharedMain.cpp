
#include "LinkSharedMain.h"
#include <jni.h>

std::string LinkShared::LinkSharedMain::sayHelloWorld() {
    return "!" + HelloWorld::helloWorld() + "!";
}

extern "C" {
    JNIEXPORT jstring JNICALL Java_com_peerless2012_ndk_link_shared_LinkSharedTest_sayHelloWorld(JNIEnv *env, jclass clazz) {
        return env->NewStringUTF(LinkShared::LinkSharedMain::sayHelloWorld().c_str());
    }

}

/**
* @Author peerless2012
* @Email peerless2012@126.com
* @DateTime 2022/8/19 16:31
* @Version V1.0
* @Description 
*/

#include "Beneficiary.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_peerless2012_module_beneficiary_BeneficiaryTest_call(JNIEnv *env, jclass clazz) {
    return env->NewStringUTF(provideModule().c_str());
}
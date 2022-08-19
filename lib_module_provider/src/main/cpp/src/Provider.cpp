/**
* @Author peerless2012
* @Email peerless2012@126.com
* @DateTime 2022/8/19 16:27
* @Version V1.0
* @Description 
*/

#include "Provider.h"

std::string provideModule() {
    LOGD("Func call from beneficiary!");
    return "Hello beneficiary!";
}

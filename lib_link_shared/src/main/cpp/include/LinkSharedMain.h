/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */

#ifndef JNISTATICLIB_LINKSHAREDMAIN_H
#define JNISTATICLIB_LINKSHAREDMAIN_H
#include <string>
#include "jni.h"
#include "HelloWorld.h"

namespace LinkShared {

    class LinkSharedMain {

    public:
        static std::string sayHelloWorld();

    };

}

#endif //JNISTATICLIB_LINKSHAREDMAIN_H

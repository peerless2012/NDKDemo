/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */

#ifndef JNISTATICLIB_HELLOWORLD_H
#define JNISTATICLIB_HELLOWORLD_H
#include <string>
#include "World.h"
#include "Hello.h"

namespace LinkShared {

    class HelloWorld {

    public:
        static std::string helloWorld();

    };

}

#endif //JNISTATICLIB_HELLOWORLD_H

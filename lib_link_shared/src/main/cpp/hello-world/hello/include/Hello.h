/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */

#ifndef JNISTATICLIB_HELLO_H
#define JNISTATICLIB_HELLO_H

#include <string>

namespace LinkShared {

    class Hello {

    public:
        static std::string hello();

    };

}

#endif //JNISTATICLIB_HELLO_H

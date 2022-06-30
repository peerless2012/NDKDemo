/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */

#ifndef JNISTATICLIB_CALCULATOR_H
#define JNISTATICLIB_CALCULATOR_H

namespace LinkStatic {

    class Calculator {

        public:

        static int numA();

        static int numB();

    };

    extern int calculator(int a, int b);

}

#endif //JNISTATICLIB_CALCULATOR_H

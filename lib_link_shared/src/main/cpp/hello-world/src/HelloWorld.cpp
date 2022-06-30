/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */

#include "HelloWorld.h"

using namespace LinkShared;

std::string HelloWorld::helloWorld() {
    return Hello::hello() + World::world();
}
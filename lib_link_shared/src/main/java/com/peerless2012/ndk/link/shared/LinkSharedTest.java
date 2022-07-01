package com.peerless2012.ndk.link.shared;

/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/6/30 12:09
 * @Version V1.0
 * @Description
 */
public class LinkSharedTest {

    static {
        System.loadLibrary("LinkShared");
    }

    public static native String sayHelloWorld();

}

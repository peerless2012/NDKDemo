package com.peerless2012.module.beneficiary;

/**
 * @Author peerless2012
 * @Email peerless2012@126.com
 * @DateTime 2022/8/19 15:52
 * @Version V1.0
 * @Description
 */
public class BeneficiaryTest {

    static {
        System.loadLibrary("Beneficiary");
    }

    public static native String call();

}

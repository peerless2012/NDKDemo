package com.peerless2012.ndk.demo;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import com.peerless2012.ndk.link.shared.LinkSharedTest;
import com.peerless2012.ndk.link.statics.LinkStaticTest;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    private TextView resultTv;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        resultTv = findViewById(R.id.main_tv);
        findViewById(R.id.main_share_btn).setOnClickListener(this);
        findViewById(R.id.main_static_btn).setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        if (v.getId() == R.id.main_share_btn) {
            resultTv.setText(LinkSharedTest.sayHelloWorld());
        } else if (v.getId() == R.id.main_static_btn) {
            resultTv.setText("Calculator result = " + LinkStaticTest.calculator());
        }
    }
}
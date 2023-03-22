package test;


public class Testowa_klasa {
	
	public static void main(string[] args) {
		int x=5;
		System.out.print("Zmienna wynosi :" + x);
			char znak = "z";
		System.out.print("Zmienna wynosi :" + znak);
			float i = 451f;
		System.out.print("Zmienna wynosi :" + i);
			double y = 2.55;
		System.out.print("Zmienna wynosi :" + y);
			string s = "JAVA";
		System.out.print("Zmienna wynosi :" + s);
		
		char[] tab
		// w java string jest traktowany jako klasa
		
		String tab_s = newString(tab);
		
		System.out.printIn("zmienna tab_s wynosi:" + tab_s);
		
	}
}


<?xml version="1.0" encoding="utf-8"?>
<FrameLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/frame"
    android:layout_width="fill_parent"
    android:layout_height="fill_parent"
    android:orientation="horizontal"
    android:layout_gravity="center"
    android:foregroundGravity="fill"
    android:foreground="#0f0"
    tools:context=".MainActivity"
    >


    <LinearLayout
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:orientation="vertical"
        android:measureAllChildren="true">


        <ImageView
            android:id="@+id/imageView"
            android:layout_width="200dp"
            android:layout_height="200dp"
            android:contentDescription="@string/image1"
            android:scaleType="centerCrop"
            android:visibility="gone"
            app:srcCompat="@drawable/ic_launcher_foreground" />

        <TextView
            android:id="@+id/textView"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:gravity="center_horizontal"
            android:text="@string/text1" />

    </LinearLayout>
</FrameLayout>





package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        FrameLayout frame=(FrameLayout) findViewById(R.id.frame);
        frame.measure(View.MeasureSpec.UNSPECIFIED, View.MeasureSpec.UNSPECIFIED);
        int width=frame.getMeasuredWidth();
        int height=frame.getMeasuredHeight();
        Toast.makeText(getApplicationContext(), "szerokosc="+width+" wysokosc="+height, Toast.LENGTH_SHORT).show();
    }
}

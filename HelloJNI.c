#include <jni.h>
#include <stdio.h>
#include "HelloJNI.h"

JNIEXPORT void Java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj){
	int x = 10;
	int y = 20;

	int z = x*y;

	printf("The output of x and y is z: %d %d %d", x, y, z);
	
	return;
}
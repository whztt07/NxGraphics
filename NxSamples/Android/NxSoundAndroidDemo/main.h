/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

 
#include "NxSound_Headers.h"
#define CDECL __cdecl
#ifndef _Included_Native
#define _Included_Native
#ifdef __cplusplus
extern "C" {
#endif

	/*
 * Class:     Native
 * Method:    displayHelloWorld
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nx_graphics_sound_Example_CreateEngine(JNIEnv *env, jobject );
JNIEXPORT void JNICALL Java_nx_graphics_sound_Example_DeleteEngine(JNIEnv *env, jobject obj);
JNIEXPORT jint JNICALL Java_nx_graphics_sound_Example_GetNumDevices(JNIEnv *env, jobject thiz);
JNIEXPORT jstring JNICALL Java_nx_graphics_sound_Example_GetDeviceName(JNIEnv *env, jobject obj, jint firstAddend);
JNIEXPORT void JNICALL Java_nx_graphics_sound_Example_OpenDevice(JNIEnv *env, jobject obj );
JNIEXPORT void JNICALL Java_nx_graphics_sound_Example_CloseDevice(JNIEnv *env, jobject obj );
JNIEXPORT void JNICALL Java_nx_graphics_sound_Example_OpenFile(JNIEnv *env, jobject obj, jstring filepath );
JNIEXPORT void JNICALL Java_nx_graphics_sound_Example_SetRate(JNIEnv *env, jobject obj, jfloat rate );



#ifdef __cplusplus
}
#endif
#endif
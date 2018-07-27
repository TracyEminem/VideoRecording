/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_miracles_codec_camera_LibYuvUtils */

#ifndef _Included_com_miracles_codec_camera_LibYuvUtils
#define _Included_com_miracles_codec_camera_LibYuvUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_miracles_codec_camera_LibYuvUtils
 * Method:    convertToI420
 * Signature: ([BI[BI[BI[BIIIIIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_convertToI420
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jint, jint, jint, jint, jint, jint, jint, jint);


JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_scaleRotationAndMirrorToI420
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jint, jint, jint, jint, jint, jboolean, jint);

JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_i420ToNV12(JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jint);
/*
 * Class:     com_miracles_codec_camera_LibYuvUtils
 * Method:    convertToARGB
 * Signature: ([BI[BIIIIIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_convertToARGB
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_miracles_codec_camera_LibYuvUtils
 * Method:    i420Rotate
 * Signature: ([BI[BI[BI[BI[BI[BIIII)I
 */
JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_i420Rotate
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jint, jint, jint);

/*
 * Class:     com_miracles_codec_camera_LibYuvUtils
 * Method:    argbRotate
 * Signature: ([BI[BIIII)I
 */
JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_argbRotate
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jint, jint, jint);

/*
 * Class:     com_miracles_codec_camera_LibYuvUtils
 * Method:    i420Mirror
 * Signature: ([BI[BI[BI[BI[BI[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_i420Mirror
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_miracles_codec_camera_LibYuvUtils
 * Method:    argbMirror
 * Signature: ([BI[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_miracles_codec_camera_LibYuvUtils_argbMirror
        (JNIEnv *, jclass, jbyteArray, jint, jbyteArray, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

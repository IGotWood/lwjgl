/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_input_Mouse */

#ifndef _Included_org_lwjgl_input_Mouse
#define _Included_org_lwjgl_input_Mouse
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_input_Mouse_CURSOR_ONE_BIT_TRANSPARENCY
#define org_lwjgl_input_Mouse_CURSOR_ONE_BIT_TRANSPARENCY 1L
#undef org_lwjgl_input_Mouse_CURSOR_8_BIT_ALPHA
#define org_lwjgl_input_Mouse_CURSOR_8_BIT_ALPHA 2L
#undef org_lwjgl_input_Mouse_CURSOR_ANIMATION
#define org_lwjgl_input_Mouse_CURSOR_ANIMATION 4L
/* Inaccessible static: created */
/* Inaccessible static: buttons */
/* Inaccessible static: x */
/* Inaccessible static: y */
/* Inaccessible static: coord_buffer */
/* Inaccessible static: dx */
/* Inaccessible static: dy */
/* Inaccessible static: dwheel */
/* Inaccessible static: buttonCount */
/* Inaccessible static: hasWheel */
/* Inaccessible static: currentCursor */
/* Inaccessible static: buttonName */
/* Inaccessible static: buttonMap */
/* Inaccessible static: initialized */
/* Inaccessible static: readBuffer */
/* Inaccessible static: eventButton */
/* Inaccessible static: eventState */
#undef org_lwjgl_input_Mouse_BUFFER_SIZE
#define org_lwjgl_input_Mouse_BUFFER_SIZE 50L
/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetNativeCursorCaps
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetNativeCursorCaps
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nSetNativeCursor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nSetNativeCursor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetMinCursorSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetMinCursorSize
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetMaxCursorSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetMaxCursorSize
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nHasWheel
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_input_Mouse_nHasWheel
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetButtonCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetButtonCount
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nCreate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nCreate
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nDestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nDestroy
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nPoll
 * Signature: (Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nPoll
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nEnableBuffer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nEnableBuffer
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nRead
 * Signature: (Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nRead
  (JNIEnv *, jclass, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif

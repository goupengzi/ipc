/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mittudev_ipc_Connection */

#ifndef _Included_com_mittudev_ipc_Connection
#define _Included_com_mittudev_ipc_Connection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionCreate
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_mittudev_ipc_Connection_connectionCreate
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionConnect
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_mittudev_ipc_Connection_connectionConnect
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionStartAutoDispatch
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionStartAutoDispatch
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionStopAutoDispatch
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionStopAutoDispatch
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionSetCallback
 * Signature: (JLcom/mittudev/ipc/ConnectionCallback;)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionSetCallback
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionRemoveCallback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionRemoveCallback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionSend
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionSend
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionSubscribe
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionSubscribe
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionRemoveSubscription
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionRemoveSubscription
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_mittudev_ipc_Connection
 * Method:    connectionDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mittudev_ipc_Connection_connectionDestroy
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

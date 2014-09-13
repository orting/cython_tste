/*
 *                       Yeppp! library implementation
 *                   This file is auto-generated by Peach-Py,
 *        Portable Efficient Assembly Code-generator in Higher-level Python,
 *                  part of the Yeppp! library infrastructure
 * This file is part of Yeppp! library and licensed under the New BSD license.
 * See LICENSE.txt for the full text of the license.
 */

#include <jni.h>
#include <yepPrivate.h>
#include <yepCore.h>
#include <yepJavaPrivate.h>


JNIEXPORT jfloat JNICALL Java_info_yeppp_Core_SumAbs_1V32f_1S32f(JNIEnv *env, jclass class, jfloatArray vArray, jint vOffset, jint length) {
	enum YepStatus status;
	Yep32f* vPointer = NULL;
	Yep32f sumAbs;

	if YEP_UNLIKELY(vArray == NULL) {
		(*env)->ThrowNew(env, NullPointerException, "Argument vArray is null");
		return (jfloat)0;
	}
	if YEP_UNLIKELY(vOffset < 0) {
		(*env)->ThrowNew(env, IllegalArgumentException, "Argument vOffset is negative");
		return (jfloat)0;
	}
	if YEP_UNLIKELY(((YepSize)vOffset) + ((YepSize)length) > (YepSize)((*env)->GetArrayLength(env, vArray))) {
		(*env)->ThrowNew(env, IndexOutOfBoundsException, "vOffset + length exceed the length of vArray");
		return (jfloat)0;
	}
	if YEP_UNLIKELY(length < 0) {
		(*env)->ThrowNew(env, NegativeArraySizeException, "Argument length is negative");
		return (jfloat)0;
	}

	vPointer = (*env)->GetPrimitiveArrayCritical(env, vArray, NULL);

	status = yepCore_SumAbs_V32f_S32f(&vPointer[vOffset], &sumAbs, length);

	(*env)->ReleasePrimitiveArrayCritical(env, vArray, vPointer, JNI_ABORT);
	if YEP_UNLIKELY(status != YepStatusOk) {
		yepJNI_ThrowSuitableException(env, status);
	}


	return sumAbs;
}

JNIEXPORT jdouble JNICALL Java_info_yeppp_Core_SumAbs_1V64f_1S64f(JNIEnv *env, jclass class, jdoubleArray vArray, jint vOffset, jint length) {
	enum YepStatus status;
	Yep64f* vPointer = NULL;
	Yep64f sumAbs;

	if YEP_UNLIKELY(vArray == NULL) {
		(*env)->ThrowNew(env, NullPointerException, "Argument vArray is null");
		return (jdouble)0;
	}
	if YEP_UNLIKELY(vOffset < 0) {
		(*env)->ThrowNew(env, IllegalArgumentException, "Argument vOffset is negative");
		return (jdouble)0;
	}
	if YEP_UNLIKELY(((YepSize)vOffset) + ((YepSize)length) > (YepSize)((*env)->GetArrayLength(env, vArray))) {
		(*env)->ThrowNew(env, IndexOutOfBoundsException, "vOffset + length exceed the length of vArray");
		return (jdouble)0;
	}
	if YEP_UNLIKELY(length < 0) {
		(*env)->ThrowNew(env, NegativeArraySizeException, "Argument length is negative");
		return (jdouble)0;
	}

	vPointer = (*env)->GetPrimitiveArrayCritical(env, vArray, NULL);

	status = yepCore_SumAbs_V64f_S64f(&vPointer[vOffset], &sumAbs, length);

	(*env)->ReleasePrimitiveArrayCritical(env, vArray, vPointer, JNI_ABORT);
	if YEP_UNLIKELY(status != YepStatusOk) {
		yepJNI_ThrowSuitableException(env, status);
	}


	return sumAbs;
}

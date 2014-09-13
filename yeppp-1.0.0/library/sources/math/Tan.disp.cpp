/*
 *                       Yeppp! library implementation
 *                   This file is auto-generated by Peach-Py,
 *        Portable Efficient Assembly Code-generator in Higher-level Python,
 *                  part of the Yeppp! library infrastructure
 * This file is part of Yeppp! library and licensed under the New BSD license.
 * See LICENSE.txt for the full text of the license.
 */

#include <yepPredefines.h>
#include <yepTypes.h>
#include <yepPrivate.h>
#include <math/Tan.disp.h>

#if defined(YEP_MSVC_COMPATIBLE_COMPILER)
	#pragma section(".rdata$DispatchTable", read)
	#pragma section(".data$DispatchPointer", read, write)
#endif

extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_Tan_V64f_V64f_Default(const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize length);
#if defined(YEP_MICROSOFT_X64_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_Tan_V64f_V64f_Bulldozer(const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize length);
#endif // YEP_MICROSOFT_X64_ABI
#if defined(YEP_SYSTEMV_X64_ABI)
	extern "C" YEP_LOCAL_SYMBOL YepStatus YEPABI _yepMath_Tan_V64f_V64f_Bulldozer(const Yep64f *YEP_RESTRICT x, Yep64f *YEP_RESTRICT y, YepSize length);
#endif // YEP_SYSTEMV_X64_ABI
YEP_USE_DISPATCH_TABLE_SECTION const FunctionDescriptor<YepStatus (YEPABI*)(const Yep64f *YEP_RESTRICT, Yep64f *YEP_RESTRICT, YepSize)> _dispatchTable_yepMath_Tan_V64f_V64f[] = 
{
	#if defined(YEP_MICROSOFT_X64_ABI)
		#ifndef YEP_MACOSX_OS
			YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_Tan_V64f_V64f_Bulldozer, YepIsaFeaturesDefault, YepX86SimdFeatureAVX | YepX86SimdFeatureFMA4, YepX86SystemFeatureYMM, YepCpuMicroarchitectureBulldozer, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#endif // YEP_MACOSX_OS
	#endif // YEP_MICROSOFT_X64_ABI
	#if defined(YEP_SYSTEMV_X64_ABI)
		#ifndef YEP_MACOSX_OS
			YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_Tan_V64f_V64f_Bulldozer, YepIsaFeaturesDefault, YepX86SimdFeatureAVX | YepX86SimdFeatureFMA4, YepX86SystemFeatureYMM, YepCpuMicroarchitectureBulldozer, "asm", YEP_NULL_POINTER, YEP_NULL_POINTER),
		#endif // YEP_MACOSX_OS
	#endif // YEP_SYSTEMV_X64_ABI
	YEP_DESCRIBE_FUNCTION_IMPLEMENTATION(_yepMath_Tan_V64f_V64f_Default, YepIsaFeaturesDefault, YepSimdFeaturesDefault, YepSystemFeaturesDefault, YepCpuMicroarchitectureUnknown, "c++", "Naive", "None")
};


YEP_USE_DISPATCH_POINTER_SECTION YepStatus (YEPABI*_yepMath_Tan_V64f_V64f)(const Yep64f *YEP_RESTRICT, Yep64f *YEP_RESTRICT, YepSize) = YEP_NULL_POINTER;

#if defined(YEP_MSVC_COMPATIBLE_COMPILER)
	#pragma code_seg( push, ".text$DispatchFunction" )
#endif

YEP_USE_DISPATCH_FUNCTION_SECTION YepStatus YEPABI yepMath_Tan_V64f_V64f(const Yep64f *YEP_RESTRICT xPointer, Yep64f *YEP_RESTRICT yPointer, YepSize length) {
	return _yepMath_Tan_V64f_V64f(xPointer, yPointer, length);
}

#if defined(YEP_MSVC_COMPATIBLE_COMPILER)
	#pragma code_seg( pop )
#endif

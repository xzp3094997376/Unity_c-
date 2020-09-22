#ifndef __NativeCode_H__
#define __NativeCode_H__

#ifndef EXPORT_DLL
#define EXPORT_DLL __declspec(dllexport) //导出dll声明
#endif

extern "C" {
	EXPORT_DLL int MyAddFunc(int _a, int _b);
}
#endif
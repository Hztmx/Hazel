#pragma once

// __declspec dllexport��importʱWindowsΨһ�ģ�ֻ������windows
#ifdef HZ_PLATFORM_WINDOWS
    // �������dll���������Ϊ�����Hazel��Ŀ�������
    #ifdef HZ_BUILD_DLL 
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#else
    #error Hazel only supports Windows!
#endif
// Hazel->����->C/C++->Ԥ������->Ԥ����������->�����HZ_PLATFORM_WINDOWS
// Sandbox->����->C/C++->Ԥ������->Ԥ����������->�����HZ_PLATFORM_WINDOWS
// Hazel->����->C/C++->Ԥ������->Ԥ����������->�����HZ_BUILD_DLL
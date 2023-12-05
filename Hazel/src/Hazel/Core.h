#pragma once

// __declspec dllexport和import时Windows唯一的，只适用于windows
#ifdef HZ_PLATFORM_WINDOWS
    // 如果构建dll，这个宏是为了这个Hazel项目被定义的
    #ifdef HZ_BUILD_DLL 
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#else
    #error Hazel only supports Windows!
#endif
// Hazel->属性->C/C++->预处理器->预处理器定义->定义宏HZ_PLATFORM_WINDOWS
// Sandbox->属性->C/C++->预处理器->预处理器定义->定义宏HZ_PLATFORM_WINDOWS
// Hazel->属性->C/C++->预处理器->预处理器定义->定义宏HZ_BUILD_DLL
#pragma once

#include "Core.h"

namespace Hazel {

	// 因为是一个dll，为了在Sandbox中使用这个类，需要从Hazel.dll中导出它，所以在构建Hazel.dll时，它需要dllexport
	// 必须根据dll的写入位置来设置__declspec(dllexport)和import
	class HAZEL_API Application
	{
	public:
		Application();
		// 设置为虚方法，因为这个类会被继承
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

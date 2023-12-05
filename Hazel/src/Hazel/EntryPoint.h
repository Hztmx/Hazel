#pragma once

// 入口点

// 入口点会根据平台改变
#ifdef HZ_PLATFORM_WINDOWS

// 创建Hazel应用
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	// printf("Hazel Engine\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
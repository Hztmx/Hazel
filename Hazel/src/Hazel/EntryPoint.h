#pragma once

// ��ڵ�

// ��ڵ�����ƽ̨�ı�
#ifdef HZ_PLATFORM_WINDOWS

// ����HazelӦ��
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	// printf("Hazel Engine\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
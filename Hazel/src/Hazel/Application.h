#pragma once

#include "Core.h"

namespace Hazel {

	// ��Ϊ��һ��dll��Ϊ����Sandbox��ʹ������࣬��Ҫ��Hazel.dll�е������������ڹ���Hazel.dllʱ������Ҫdllexport
	// �������dll��д��λ��������__declspec(dllexport)��import
	class HAZEL_API Application
	{
	public:
		Application();
		// ����Ϊ�鷽������Ϊ�����ᱻ�̳�
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

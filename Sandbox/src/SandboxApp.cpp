#include <Hazel.h>
// Sandbox->����->C/C++->ͨ��->���Ӱ���Ŀ¼->д��$(SolutionDir)Hazel\src

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox() {

	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
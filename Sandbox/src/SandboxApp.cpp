#include <Hazel.h>
// Sandbox->属性->C/C++->通用->附加包含目录->写上$(SolutionDir)Hazel\src

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
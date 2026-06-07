#include <GLFW/glfw3.h>
#include <string>

class Window {
	public:
		Window(const std::string& title, const int width, const int height);
		~Window();

		void Tick();

		const GLFWwindow* GetGLFWWindow() const { return window; }
	private:
		GLFWwindow* window;
};
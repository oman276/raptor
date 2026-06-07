#include <GLFW/glfw3.h>
#include <string>
#include <memory>

struct GLFWwindowDeleter {
	void operator()(GLFWwindow* window) const { glfwDestroyWindow(window); }
};

class Window {
	public:
		Window(const std::string& title, const int width, const int height);
		~Window();

		void Tick();
		bool isLive() const;
	private:
		std::unique_ptr<GLFWwindow, GLFWwindowDeleter> window;
};
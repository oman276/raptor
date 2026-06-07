#include <iostream>
#include "window.h"

int main() {
	std::cout << "Hello, World!" << std::endl;

	Window* window = new Window("Raptor", 800, 600);

	while (!glfwWindowShouldClose(window->GetGLFWWindow())) {
		window->Tick();
	}

	delete window;
	return 0;
}
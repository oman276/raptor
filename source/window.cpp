/*
Open a window, defining size and title.
We will need to figure out how to add things into the window but this works for now.
*/

#include <iostream>
#include "window.h"

#include "graphics/graphics.h"

Window::Window(const std::string& title, const int width, const int height) {
	if (!glfwInit()) {
		return;
	}
	window = std::unique_ptr<GLFWwindow, GLFWwindowDeleter>(glfwCreateWindow(width, height, title.c_str(), NULL, NULL));
	graphics = std::unique_ptr<Graphics>(new Graphics());
}

Window::~Window() {
	window.reset();
	graphics.reset();
	glfwTerminate();
}

void Window::Tick() {
	glfwPollEvents();
	graphics->Tick();
}

bool Window::isLive() const {
	return !glfwWindowShouldClose(window.get());
}
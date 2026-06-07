/*
Open a window, defining size and title.
We will need to figure out how to add things into the window but this works for now.
*/

#include <iostream>
#include "window.h"

Window::Window(const std::string& title, const int width, const int height) {
	if (!glfwInit()) {
		return;
	}
	window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
}

Window::~Window() {
	glfwDestroyWindow(window);
	glfwTerminate();
}

void Window::Tick() {
	glfwPollEvents();
}
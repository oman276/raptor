#include <iostream>
#include <memory>

#include "window.h"

int main() {
	std::cout << "Hello, World!" << std::endl;

	std::unique_ptr<Window> window = std::make_unique<Window>("Raptor", 800, 600);

	while (window->isLive()) {
		window->Tick();
	}

	return 0;
}
#include <iostream>
#include <memory>

#include "window.h"

int main() {
	std::cout << "Launching Raptor..." << std::endl;

	// the window should hold the graphics object and tick the scene tree
	std::unique_ptr<Window> window = std::make_unique<Window>("Raptor", 800, 600);

	while (window->isLive()) {
		window->Tick();
	}

	std::cout << "Shutting down Raptor..." << std::endl;
	return 0;
}
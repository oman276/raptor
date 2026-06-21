#pragma once

#include <memory>

/*
Graphics rendering library for rendering all elements of the scene tree.
*/

class WGPUInstance;

class Graphics {
	public:
		Graphics();
		~Graphics();

		void Tick();

	private:
		std::unique_ptr<WGPUInstance> instance;
};

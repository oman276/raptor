#include "graphics.h"

#include <webgpu/webgpu.h>

Graphics::Graphics() {
	// upon setup, we need to:
	// 1. Create a webGPU instance, which will be used to create the adapter and device
	WGPUInstanceDescriptor instanceDescriptor = {};
	instanceDescriptor.nextInChain = nullptr;

	instance = std::make_unique<WGPUInstance>(wgpuCreateInstance(&instanceDescriptor));

	// 2. request the adapter from webGPU

}

Graphics::~Graphics() {

}
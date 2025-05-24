// Exploring OpenGL using C++20 with Clang and G++ and Intel's compiler and shared on GitHub via Sublime Merge
// Created by Tyler Dodge
// Began 2025.5.23

/* TODO:
 * Create GitHub repository
 * Install OpenGL
 * Create a project plan
 * Create an architecure template
 * Verify/Install Premake and CMake and Make
 * Identify learning resources and documentation for OpenGL, GLFW, and GLM
 * 
 * (Later on) Identify learning resources for GLSL and HLSL and CUDA
 * (Later on) Install GLSL and HLSL and CUDA
 * (Later on) ...
 */

// import <iostream> --- g++: imports must be built before being imported
#include <iostream>

int main (int argc, char** argv) {
	std::cout << "GENESIS\tv0.0.1\n";
	std::cout << "Generator: Tyler Dodge\n";
	std::cout << "License: MIT (c) 2025 Tyler Dodge\n\n";
	
	std::cout << "Arguments provided to the application:";
	for (int i = 1; i < argc; ++i) // Begin at 1 since argv[0] is the application name
		std::cout << " " << argv[i];
	std::cout << "\n\nI hope you have a wonderful day and a beautiful life! :)" << std::endl;

	return 0;	
}
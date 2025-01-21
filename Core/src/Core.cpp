// Core.cpp : Source file for your target.
//

#include "core/Core.h"
#include <iostream>
#include <boost/asio.hpp>
Core::Core()
{
}

Core::~Core()
{
}

void Core::Print()
{
	std::cout << "Hello from core";
}

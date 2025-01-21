#include <iostream>
#include "core/Core.h"
using namespace std;

int main()
{
	Core* core = new Core();
	core->Print();
	delete core;
	return 0;
}

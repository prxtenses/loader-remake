#include <Windows.h>
#include <iostream>
#include <TlHelp32.h>

using namespace std;

namespace Functions
{
	void Exit(const std::string message) {
		std::cout << message << std::endl;
		Sleep(2000);
		ExitProcess(0);
	}

	string Log() {
		cout << "[ " << dye::aqua("INF") << " ] ";
	}
}
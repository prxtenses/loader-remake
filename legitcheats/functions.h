#include <Windows.h>
#include <iostream>
#include <TlHelp32.h>

using namespace std;

namespace Functions
{
	void Exit(const string message) {
		cout << message << endl;
		Sleep(2000);
		ExitProcess(0);
	}
}

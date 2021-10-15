#include <iostream>
#include <Windows.h>
#include "color.hpp"
#include "functions.h"

#include <wininet.h>
#pragma comment(lib,"Wininet.lib")

using namespace std;

int main() {
	Sleep(1000);

	//Main title
	SetConsoleTitleA(" ");

	//Resize console
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, 600, TRUE);

	//Internet connection
	bool online = InternetCheckConnection(L"https://google.com", FLAG_ICC_FORCE_CONNECTION, 0);

	//Sleep method like in LegitCheats
	Sleep(3000);

	//Text
	if (online) {
		cout << "[ " << dye::aqua("INF") << " ] " << "logged in!" << endl;
		cout << "[ " << dye::aqua("INF") << " ] " << "waiting for javaw.exe" << endl;

		//Check if lunar is open
		while (!FindWindowA("LWJGL", nullptr)) Sleep(100);

		//Found lunar, continuing
		Sleep(3000);

		cout << "[ " << dye::aqua("INF") << " ] " << "javaw.exe found, injecting!" << endl;
		cout << "[ " << dye::aqua("INF") << " ] " << "injected with sucessfully!" << endl;

		Sleep(2000);
		ExitProcess(0);
	}
	else {
		Functions::Exit("no internet connection");
	}

	return 0;
}
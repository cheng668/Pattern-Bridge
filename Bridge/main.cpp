#include "Window.h"
#include "IconWindow.h"
#include "ApplicationWindow.h"
int main()
{
	Window* IconWin = new IconWindow();
	Window* AppWin = new ApplicationWindow();

	IconWin->DrawContents();
	AppWin->DrawContents();

	delete IconWin;
	delete AppWin;


	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}

/*
output:
construct Window!
construct IconWindow!
construct Window!
construct ApplicationWindow!
IconWindow DrawContents 2 2 2 2!
construct WindowImp!
construct PMWindowImp!
PMWindowImp::DeviceRect: 2
ApplicationWindow DrawContents 3 3 3 3!
construct WindowImp!
construct PMWindowImp!
PMWindowImp::DeviceRect: 3
delete IconWindow!
delete Window!
delete PMWindowImp!
delete WindowImp!
delete ApplicationWindow!
delete Window!
delete PMWindowImp!
delete WindowImp!
*/
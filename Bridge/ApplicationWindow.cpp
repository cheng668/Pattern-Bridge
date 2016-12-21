#include "ApplicationWindow.h"


ApplicationWindow::ApplicationWindow()
{
	cout << "construct ApplicationWindow!" << endl;
}


ApplicationWindow::~ApplicationWindow()
{
	cout << "delete ApplicationWindow!" << endl;
}


void ApplicationWindow::DrawContents()
{
	cout << "ApplicationWindow DrawContents 3 3 3 3!" << endl;

	WindowImp* imp = GetWindowImp();
	if (imp != nullptr)
	{
		imp->DeviceRect(3, 3, 3, 3);
	}
}
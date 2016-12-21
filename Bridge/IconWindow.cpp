#include "IconWindow.h"


IconWindow::IconWindow()
{
	cout << "construct IconWindow!" << endl;
}


IconWindow::~IconWindow()
{
	cout << "delete IconWindow!" << endl;
}

void IconWindow::DrawContents()
{
	cout << "IconWindow DrawContents 2 2 2 2!" << endl;

	WindowImp* imp = GetWindowImp();
	if (imp != nullptr)
	{
		imp->DeviceRect(2, 2, 2, 2);
	}
}
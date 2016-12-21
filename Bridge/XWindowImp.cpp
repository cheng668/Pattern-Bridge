#include "XWindowImp.h"


XWindowImp::XWindowImp()
{
	cout << "construct XWindowImp!" << endl;

}


XWindowImp::~XWindowImp()
{
	cout << "delete XWindowImp!" << endl;

}
void XWindowImp::DeviceRect(int x, int y, int w, int h)
{
	cout << "XWindowImp::DeviceRect: " << x + y + w + h << endl;

}

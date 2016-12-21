#include "PMWindowImp.h"


PMWindowImp::PMWindowImp()
{
	cout << "construct PMWindowImp!" << endl;

}


PMWindowImp::~PMWindowImp()
{
	cout << "delete PMWindowImp!" << endl;

}

void PMWindowImp::DeviceRect(int x, int y, int w, int h)
{
	cout << "PMWindowImp::DeviceRect: " << (x + y + w + h)/4 << endl;

}

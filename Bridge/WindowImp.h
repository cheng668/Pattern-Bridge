#pragma once
#include <iostream>
using namespace std;
class WindowImp{
public:
	virtual ~WindowImp(){ cout << "delete WindowImp!" << endl; };
	virtual void DeviceRect(int, int, int, int) = 0;
protected:
	WindowImp(){ cout << "construct WindowImp!" << endl; };
};
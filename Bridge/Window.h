#pragma once
#include <iostream>
#include "WindowImp.h"
#include "PMWindowImp.h"
using namespace std;
class Window
{
public:
	Window(){ cout << "construct Window!" << endl; };
	virtual ~Window(){ 
		cout << "delete Window!" << endl;
		if (_imp)
		{
			delete _imp;
		}
	};

	virtual void DrawContents() = 0;
	virtual void DrawLine(){ 
		cout << "draw line" << endl; 
		if (GetWindowImp())
		{
			_imp->DeviceRect(1, 1, 1, 1);
		}
	}

protected:
	WindowImp* GetWindowImp(){
		/*
		这里可以用单例模式构建的抽象工厂对象创建所需的WindowImp对象，实现构建透明
		_imp = WindowAstractFactorty::Instance()->MakeWindowImp();
		*/
		if (_imp == nullptr)
			_imp = new PMWindowImp();
		return _imp;
	};
private:
	WindowImp* _imp = nullptr;
};

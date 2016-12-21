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
		��������õ���ģʽ�����ĳ��󹤳����󴴽������WindowImp����ʵ�ֹ���͸��
		_imp = WindowAstractFactorty::Instance()->MakeWindowImp();
		*/
		if (_imp == nullptr)
			_imp = new PMWindowImp();
		return _imp;
	};
private:
	WindowImp* _imp = nullptr;
};

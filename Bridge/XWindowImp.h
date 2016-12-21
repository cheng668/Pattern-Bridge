#pragma once
#include "WindowImp.h"
class XWindowImp :
	public WindowImp
{
public:
	XWindowImp();
	virtual ~XWindowImp();
	virtual void DeviceRect(int, int, int, int) override;
};


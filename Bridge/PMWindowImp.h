#pragma once
#include "WindowImp.h"
class PMWindowImp :
	public WindowImp
{
public:
	PMWindowImp();
	virtual ~PMWindowImp();
	virtual void DeviceRect(int, int, int, int) override;
};


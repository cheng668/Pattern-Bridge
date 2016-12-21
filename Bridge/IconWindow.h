#pragma once
#include "Window.h"
class IconWindow :
	public Window
{
public:
	IconWindow();
	virtual ~IconWindow();
	virtual void DrawContents() override;
private:
};


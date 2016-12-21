#pragma once
#include "Window.h"
class ApplicationWindow :
	public Window
{
public:
	ApplicationWindow();
	virtual ~ApplicationWindow();
	virtual void DrawContents() override;
private:

};


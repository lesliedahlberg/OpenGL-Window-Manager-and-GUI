#pragma once
#include "ControlBase.h"
#include "Label.h"
#include "Header.h"

class CheckBox :
	public ControlBase
{
private:
	Label buttonText;
	Color buttonColor;
	Color textColor;
	bool checked;
	bool hit;

public:
	CheckBox();
	CheckBox(int x, int y);
	~CheckBox();

	virtual void OnLoaded();
	virtual void OnPaint(void);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);

	virtual void setText(std::string);
	virtual void setTextColor(int r, int g, int b);
	virtual void setColor(int r, int g, int b);
	virtual void setPosition(int locX, int locY);
	virtual void setStatus(bool checked);
	virtual bool getStatus();
};

// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "Button.h"
#include "Label.h"
#include "Panel.h"
#include "RadioButton.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is create and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    

	Panel* panel_1 = new Panel(100, 100, 500, 500);
	Panel* panel_2 = new Panel(100, 100, 300, 300);
	Panel* panel_3 = new Panel(100, 100, 100, 100);

	panel_1->SetBackground(Color(200, 0, 0));
	panel_2->SetBackground(Color(0, 200, 0));
	panel_3->SetBackground(Color(0, 0, 200));

	panel_1->Add(panel_2);
	panel_2->Add(panel_3);

	panel_1->SetLocation(Point(10, 10));
	panel_2->SetLocation(Point(10, 10));

	ControlBase* base = panel_1;
	InitOGL(argc, argv, base);

	delete base;
	return 0;
}


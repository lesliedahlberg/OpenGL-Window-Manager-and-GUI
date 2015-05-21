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
#include "CheckBox.h"
#include "Window.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is create and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    
	//Window* window = new Window(10, 10, 600, 600);
	//window->SetBackground(Color(230, 230, 230));

	//Panel* window = new Panel(10, 10, 600, 600);
	//window->SetBackground(Color(230, 230, 230));

	Panel* panel_1 = new Panel(100, 100, 500, 500);
	Panel* panel_1b = new Panel(5, 5, 490, 490);
	Panel* panel_2 = new Panel(100, 100, 300, 300);
	Panel* panel_3 = new Panel(100, 100, 100, 100);
	Label* label_1 = new Label(0, 0);
	Button* button_1 = new Button(0, 0, 100, 30);

	panel_1->SetBackground(Color(200, 0, 0));
	panel_1b->SetBackground(Color(200, 50, 0));
	panel_2->SetBackground(Color(0, 200, 0));
	panel_3->SetBackground(Color(0, 0, 200));
	label_1->setText("LABEL_1");
	label_1->setColor(Color(256, 256, 256));
	button_1->SetButtonText("BUTTON");

	panel_1->Add(panel_1b);
	panel_1b->Add(panel_2);
	panel_2->Add(panel_3);
	panel_2->Add(label_1);
	panel_1->Add(button_1);

	//panel_1->SetLocation(Point(100, 100));
	//panel_2->SetLocation(Point(100, 100));
	
	CheckBox *check = new CheckBox(50, 50);
	
	RadioButton * radio = new RadioButton(0, 0);
	radio->setColor(Color(256, 256, 256));
	radio->setTextColor(Color(256, 256, 256));
	radio->setText("Radio");
	check->setText("Check");

	panel_2->Add(radio);
	panel_1->Add(check);

	
	//window->Add(panel_1);

	ControlBase* base = panel_1;
	
	InitOGL(argc, argv, base);

	delete base;
	return 0;
}


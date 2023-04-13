#include "Canvas.h"

#include <iostream>
#include <sstream>
#include <string>

#include "Circle.h"
#include "Rectangle.h"
using namespace std;

Canvas::Canvas() // Constructor.
{

}

Canvas::~Canvas() // Delete.
{
	for (auto p : drawables)
	{
		delete p;
	}
	drawables.clear();
}

void Canvas::readObjects(string str)
{
	istringstream istring(str);

	string another_string;

	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;

	bool drawCircle = false;
	bool drawRectangle = false;

	while (istring)
	{
		istring >> another_string;

		if (another_string == "circle") {
			drawCircle = true;
			continue;
		}
		else if (another_string == "rectangle")
		{
			drawRectangle = true;
			continue;
		}

		if (drawCircle)
		{
			if (x == 0)
			{
				x = stoi(another_string);
			}
			else if (y == 0)
			{
				y = stoi(another_string);
			}
			else if (i == 0)
			{
				i = stoi(another_string);
			}

			if (i != 0 && x != 0 && y != 0)
			{
				drawables.push_back(new Circle(x, y, i));
				drawCircle = false;
				i = 0;
				x = 0;
				y = 0;
			}
		}

		if (drawRectangle)
		{
			if (x == 0)
			{
				x = stoi(another_string);
			}
			else if (y == 0)
			{
				y = stoi(another_string);
			}
			else if (i == 0)
			{
				i = stoi(another_string);
			}
			else if (j == 0)
			{
				j = stoi(another_string);
			}

			if (i != 0 && j != 0 && x != 0 && y != 0)
			{
				drawables.push_back(new Rectangle(x, y, i, j));
				drawRectangle = false;
				i = 0;
				j = 0;
				x = 0;
				y = 0;
			}
		}
	}
}

void Canvas::draw()
{
	// Draw all the objects in drawables.
	auto size = drawables.size();
	for (int i = 0; i < size; i++)
	{
		drawables[i]->draw();
	}
}

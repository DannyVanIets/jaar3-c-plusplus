#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int x, int y, int width, int height) : Drawable(x, y)
{
	this->width = width;
	this->height = height;
}

void Rectangle::draw()
{
	cout << "Drawing a " << width << " by " << height << " rectangle at (" << x << ", " << y << ")" << endl;
}

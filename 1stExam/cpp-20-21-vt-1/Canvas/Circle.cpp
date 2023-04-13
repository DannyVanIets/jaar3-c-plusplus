#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int x, int y, int radius): Drawable(x, y)
{
	this->radius = radius;
}

void Circle::draw()
{
	cout << "Drawing a circle with radius " << radius << " at (" << x << ", " << y << ")" << endl;
}

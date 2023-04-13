#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Canvas.h"

int main(int argc, char** argv)
{
	// Assignment 3a
	Drawable* c = new Circle(50, 50, 25);
	Drawable* r = new Rectangle(25, 40, 50, 30);

	c->draw();
	r->draw();
	delete c;
	delete r;

	std::cout << std::endl;

	// Assignment 3b
	Canvas canvas;

	canvas.readObjects("circle 10 20 25 rectangle 25 40 50 40");
	canvas.draw();

	std::cout << std::endl;

	//Canvas canvas2;
	//canvas2.readObjects("circle 1 2 3 rectangle 4 5 6 7 rectangle 8 9 10 11 circle 12 13 14 circle 15 16 17 rectangle 18 19 20 21");
	//canvas2.draw();
}

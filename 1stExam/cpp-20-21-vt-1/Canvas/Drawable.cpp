#include "Drawable.h"

#include <iostream>
using namespace std;

Drawable::Drawable(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Drawable::draw()
{
	cout << "Draw!";
}
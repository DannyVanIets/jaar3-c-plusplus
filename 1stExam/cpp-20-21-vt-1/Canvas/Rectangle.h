#pragma once
#include "Drawable.h"
using namespace std;

class Rectangle: public Drawable
{
private:
	int width;
	int height;

public:
	Rectangle(int x, int y, int width, int height);

	void draw() override;
};
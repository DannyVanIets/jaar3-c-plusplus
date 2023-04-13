#pragma once
#include "Drawable.h"
using namespace std;

class Circle : public Drawable
{
private:
	int radius;

public:
	Circle(int x, int y, int radius);

	void draw() override;
};
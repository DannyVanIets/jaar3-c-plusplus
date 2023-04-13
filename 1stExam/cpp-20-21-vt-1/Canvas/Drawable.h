#pragma once
using namespace std;

class Drawable
{
protected:
	int x;
	int y;

	Drawable(int x, int y);

public:
	virtual void draw();
};
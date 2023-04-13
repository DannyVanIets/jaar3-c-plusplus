#pragma once

//!!!
//
// The exam paper states "Canvas contains a list of drawables" (Assignment 3b)
// Instead of a list of drawables, use a list of pointers to drawables:
//
// std::vector<Drawable*> m_drawables;
//
//!!!
#include <string>
#include <vector>

#include "Drawable.h"
using namespace std;

class Canvas
{
private:
	vector<Drawable*> drawables;

public:
	Canvas();
	~Canvas();

	void readObjects(string str);
	void draw();
};
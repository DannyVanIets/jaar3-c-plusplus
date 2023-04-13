#include "Distance.h"

#include <iostream>
#include <ostream>

using namespace std;

Distance::Distance(int voet, int roede)
{
	//cout << "Distance(), the constructor not an empty function!" << endl;
	this->voet = voet;
	this->roede = roede;
}

Distance::~Distance()
{
	//cout << "~Distance()" << endl;
	voet = NULL;
	roede = NULL;
}

Distance& Distance::operator+=(const Distance& d)
{
	//cout << "operator+=()" << endl;
	int i = d.roede + roede;
	while(i - 14 > 0)
	{
		voet++;
		i = i - 14;
	}
	voet = voet + d.voet;
	roede = i;
	return *this;
}

// Are not in the class.
ostream& operator<<(ostream& os, const Distance d)
{
	//cout << "operator<<()" << endl;
	os << "(" << d.voet << ", " << d.roede << ")";
	return os;
}

Distance operator+(const Distance& d1, const Distance& d2)
{
	//cout << "operator+()" << endl;
	Distance d(0,0); // Add default constructor perhaps.
	int i = d1.roede + d2.roede;
	while (i - 14 >= 0)
	{
		d.voet++;
		i = i - 14;
	}
	d.voet += d1.voet + d2.voet;
	d.roede = i;
	return d;
}
#include <iostream>

using namespace std;

void add_one(int x)
{
	x++;
	cout << "local x is: " << x << endl;
}

void add_one(int* p)
{
	*p = *p + 1;
	cout << "local x is: " << *p << endl;
}

int main()
{
	// Multi-dimensional arrays with pointers.
	int** p = new int*[10];
	p[0] = new int[5];
	p[1] = new int[6];
	p[0][3] = 5;
	
	int x = 5;
	//int* p = &x;

	add_one(x); // 6.
	cout << "The main x is: " << x << endl; // 5.
	add_one(p); // 6, because it points to the local int x variable!
	cout << "The main x is: " << x << endl; // 6.
	
	int a = 5;
	int b = 8;
	//int* p = &a;

	cout << "values: " << a << "," << b << *p << endl; // a = 5, b = 8, p = 5

	*p = 13;
	cout << "values: " << a << "," << b << *p << endl; // a = 13, b = 8, p = 13;

	*p = b;
	cout << "values: " << a << "," << b << *p << endl; // a = 8, b = 8, p = 8;

	a = 21;
	cout << "values: " << a << "," << b << *p << endl; // a = 21, b = 8, p = 21;

	p = &b;
	cout << "values: " << a << "," << b << *p << endl; // a = 21, b = 8, p = 8
}
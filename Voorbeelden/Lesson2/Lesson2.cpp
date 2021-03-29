#include <iostream>

using namespace std;

void ReferenceOperator()
{
	int n = 8;

	cout << "Memory address of N: " << &n << endl; // The & is a reference to the address! in memory!

	int& y = n; // n must receive another int, can't do "int& z;"
	cout << "Reference to N, value: " << y << " and memory: " << &y << endl;
}

void Pointer()
{
	// Pointers hold a memory address. If you want the value, you gotta dereference it.
	int x = 7;
	int* d; // Pointer to an integer.
	d = &x; // Pointer to address of i.

	// Also called "dereferencing x", if you do *d.
	// Deferefencing: returns the value of what the pointers points at, in this case 7.
	cout << "Value: " << *d << ", memory: " << d << endl; // *d is the value at the address.
	
	int a = *d; // a now receives the value of x.
	cout << a << endl;
}

void WhatWillTheOutputBe()
{
	int a = 5;
	int b = 8;
	int* p = &a;

	cout << "values " << a << "," << b << "," << *p << endl; // 5, 8, 5

	*p = 13;
	cout << "values " << a << "," << b << "," << *p << endl; // 13, 8, 13

	*p = b;
	cout << "values " << a << "," << b << "," << *p << endl; // 8, 8, 8

	a = 21;
	cout << "values " << a << "," << b << "," << *p << endl; // 21, 8, 21

	p = &b;
	cout << "values " << a << "," << b << "," << *p << endl; // 21, 8, 8
}

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

void WhatWillTheOutputBe2()
{
	int x = 5;
	int* p = &x;

	add_one(x);
	cout << "local x is: " << x << endl;

	add_one(p);
	cout << "local x is: " << x << endl;

	// Don't forget to delete!
	//delete p;
	//p = NULL; // Safe remove!
}

void PracticeFunction(int *p)
{
	*p += 3;
}

void CopyArrayWithPointers()
{
	char orig[] = "programming";
	char copy[12];

	char* p = orig;
	char* q = copy;

	while(*p)
	{
		*q++ = *p++;
	}
	*q = '\0';

	cout << copy << endl;
}

int maxValue(const int a[], int nSize)
{
	if (nSize <=0 )
	{
		return 0;
	}

	int max = *a;
	for(int i = 0; i < nSize; i++)
	{
		if(max < *(a+1))
		{
			max = *(a + 1);
		}
	}
	return max;
}

int main()
{
	//ReferenceOperator();
	//Pointer();

	//WhatWillTheOutputBe();
	//WhatWillTheOutputBe2();

	int i = 2;
	//PracticeFunction(&i);
	//cout << i << endl;
	
	CopyArrayWithPointers();
	const int size = 5;
	int a[size] = { 1, 2, 3, 4, 6 };
	cout << maxValue(a, size) << endl;
}
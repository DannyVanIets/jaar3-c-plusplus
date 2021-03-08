#include <iostream>
#include <string>

using namespace std;

void exercise3B(int** p, int n);
void exercise3C(int** p);

void exercise1()
{
	int i = 2, j = 3;

	int* r = new int;
	int* p = new int(2);
	int* q = new int(3);

	cout << *p << endl;
	cout << *q << endl;

	*r = *p;
	*p = *q;
	*q = *r;

	cout << *p << endl;
	cout << *q << endl;

	delete r;
	delete p;
	delete q;
}

void exercise2(int n)
{
	int* p = new int[n];

	for (int i = 0, j = 1; i < n; i++, j++)
	{
		p[i] = j;
	}

	for (int i = 0; i < n; i++)
	{
		cout << p[i] << endl;
	}

	delete[] p;
	p = NULL;
}

void exercise3A(int n)
{
	// Pointer to pointer to integer.
	int** p;
	// Point p to an array of pointers to integers of length n.
	p = new int* [n];

	// For every pointer, we create an array of size i + 1.
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[i + 1];

		for (int j = 0; j < i + 1; j++)
		{
			// First and last element should be 1.
			if (j == 0 || j == i)
			{
				p[i][j] = 1;
			}
			// Sum of above and above to the left.
			else
			{
				p[i][j] = p[i - 1][j] + p[i - 1][j - 1];
			}
		}
	}

	exercise3B(p, n);
	exercise3C(p);
}

void exercise3B(int** p, int n)
{
	// Gets pointer and integer and prints a triangle.
	string text;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			text += std::to_string(p[i][j]) + " ";
		}
		text += "\n";
	}

	cout << text << endl;
}

void exercise3C(int** p)
{
	delete[] p;
	p = NULL;
}

int main()
{
	cout << "Hello World!\n";

	exercise1();
	exercise2(5);
	exercise3A(4);
}
#include <iostream>
using namespace std;

void multi_dimen_array()
{
	int A[]{ 1,2,3,4, 5,6 };
	int B[][3] = { {1,2,3}, {4,5,6} };
	int C[][3] = { {1,2}, {3}, {4,5,6} }; // really confusing, try to avoid this.
	for (int i = 0; i < 6; i++)
	{
		cout << "A[" << i << "], B[0][" << i << "], C[0][" << endl;
		cout << A[i] << endl;
		cout << B[0][i] << endl;
		cout << C[0][i] << endl;
	}
	cout << "* * * * * B";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; i < 3; i++)
		{
			cout << B[i][j] << endl;
		}
	}
	cout << "* * * * * C";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; i < 3; i++)
		{
			cout << C[i][j] << endl;
		}
	}
}

void cbv(int a)
{
	a = 1;
}

void cbr(int& a) // Call by reference. Pointers, for the future. You point to the value we're getting. A is a reference to the value x.
{
	a = 1;
}

void how_about_an_array(int A[])
{
	A[0] = 1;
}

void foo(int A[], int B[][5][10])
{
	B[1][2];
}


int main()
{
	std::cout << "Hello World!\n";
	//multi_dimen_array();

	int x = 0;
	cout << x << endl;
	cbv(x);
	cout << x << endl;
	cbr(x);
	cout << x << endl;

	int A[10];
	A[0] = 0;
	cout << A[0] << endl;
	how_about_an_array(A);
	cout << A[0] << endl;
}
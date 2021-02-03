#include <iostream>
using namespace std;

void foo(int A[], int length); // This is a prototype. It will not return anything,
	// this is only to show that there is a function like this in the code.

int main()
{
	int x = 0;
    cout << "Hello World!\n" << x << " next line" << endl;
	
	int A[100];
	int B[] = { 1, 2, 3, 4, 5, 6 };
	
	/*for(int i = 0; i < 100; i++)
	{
		cout << A[i] << endl;
	}*/
	
	foo(B, 6);
	foo(A, 100);
	
	return 0;
}

void foo(int A[], int length) // With int length you can use the entire array.
{
	cout << "more stuff" << A[0] << endl;
}
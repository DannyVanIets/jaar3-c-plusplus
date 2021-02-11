// Create a DLL/library and use it walkthrough: https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-160#create-a-client-app-that-uses-the-dll
// Lots of properties need to be right!
#include <iostream>
#include <string>

#include "Week1Les1.h"

using namespace std;

int main()
{
	// Les 1 exercises
	cout << exercise1(4, 5) << endl;
	exercise2(2);
	exercise2(3);
}
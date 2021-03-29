#include <chrono>
#include <iostream>

using namespace std;

int randomnumber()
{
	int number = rand();

	// Set seed using e.g. time from time.h or GetTickCount from windows.h
	srand(time(NULL));

	int dice = rand() % 6 + 1;
	return dice;
}

int main()
{
	cout << randomnumber() << endl;
}
// Week1Les1.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "Week1Les1.h"

#include <iostream>
#include <string>
using namespace std;

int exercise1(int a, int b)
{
	int sum = a + b;
	return sum;
}

void exercise2(int a)
{
	cout << "Het getal " << a << " is";
	if (a % 2 == 0)
	{
		cout << " even.\n" << endl;
	}
	else if (a % 3 == 0)
	{
		cout << " oneven.\n" << endl;
	}
}

int exercise3(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	return exercise3(base, exponent - 1) * base;
}

bool exercise4(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int exercise5(int array_of_numbers[], int value)
{
	for (int i = 0; i <= sizeof(array_of_numbers); i++)
	{
		if (array_of_numbers[i] == value)
		{
			return value;
		}
	}
	return -1;
}

void exercise6_print_array(int numbers[], int size)
{
	string all_numbers = "";
	for (int i = 0; i < size; i++)
	{
		all_numbers += to_string(numbers[i]) + " ";
	}
	cout << all_numbers << endl;
}

void exercise6(int numbers[], int size)
{
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < size - 1; i++)
		{
			int j = i + 1;
			if (numbers[j] < numbers[i])
			{
				sorted = false;
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	exercise6_print_array(numbers, size);
}

void exercise7(int a, int b)
{
	int biggestNumber;
	if (a > b)
	{
		biggestNumber = a;
	}
	else
	{
		biggestNumber = b;
	}

	int gcd = 1;
	for (int i = 2; i <= biggestNumber; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}
	cout << "The GCD of " << a << " and " << b << " is: " << gcd << endl;
}

void exercise8(int a, int b)
{
	int biggestNumber;
	if (a > b)
	{
		biggestNumber = a;
	}
	else
	{
		biggestNumber = b;
	}

	int lcm = 1;
	for (int i = biggestNumber; i > 0; i--)
	{
		for (int j = biggestNumber; j > 0; j--)
		{
			if (a * i == b * j)
			{
				lcm = a * i;
			}
		}
	}
	cout << "The LCM of " << a << " and " << b << " is: " << lcm << endl;
}
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

#include "Templateclass.h"

using namespace std;

void UsingVectors()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(13);
	v.push_back(7);

	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}

void UsingVectors2()
{
	vector<int> v(10); // All the 10 elements have the value 0.

	vector<int> v2;
	v2 = v; // Deep copy.

	v.clear(); // Clears all elements.
	v.capacity(); // Returns capacity of vector.
	v.size(); // Returns number of elements.
	v.empty(); // Checks if empty.
	//v.erase(); // Removes number of elements.
	v.swap(v2); // Swaps two vectors.
	v.pop_back(); // Removes last element.
}

void Print(int n)
{
	cout << n << " ";
}

void VectorFill()
{
	vector<int> v(10);
	fill(v.begin(), v.end(), 6);
	/*for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}*/
	// Make sure to include "#include <algorithm>"!
	for_each(v.begin(), v.end(), Print);
}

void VectorIterator()
{
	vector<int> v(20);
	vector<int>::iterator vi;

	fill(v.begin(), v.end(), 6);

	for(vi = v.begin(); vi < v.end(); vi++) // You do not need to know the size! Nice.
	{
		cout << *vi << "";
	}
	cout << endl;
}

template <typename Type> // Can be anything! Type is arbitrary.
Type add(Type const &lvalue, Type const &rvalue)
{
	return lvalue + rvalue;
}

template int add<int>(int const& lvalue, int const& rvalue); // You can still use templates with strong typing.

template <typename Type>
Type call(Type (*fp)(Type), Type const &value) // With generic function call.
{
	return (*fp)(value);
}

int main()
{
	//UsingVectors();
	//VectorFill();
	//VectorIterator();

	//cout << "Som=" << add(3.5, 5.0) << endl; // Both must be the same type!
	
	string str1 =  "Hello, ";
	string str2 =  "here I am";
	//cout << "Sum=" << add(str1, str2) << endl;

	cout << call(&sqrt, double(4)) << endl;
	cout << call(&sin, double(1)) << endl;

	Queue<int> q;
	q.add(5);
	q.add(3);
	q.add(7);

	cout << "Start: " << endl;
	q.Print();
	q.remove();
	
	cout << "After remove." << endl;
	q.Print();
}
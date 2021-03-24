#include <iostream>
#include <vector>
#include <algorithm>

#include "MyAdd.h"
#include "MyQueue.h"

using namespace std;

void MyPrint(int n)
{
	cout << "The value is " << n << endl;
}

int main()
{
    /*vector<int> v;

	v.push_back(1);
	v.push_back(4);
	v.push_back(7);
	v[1] = 5;*/
	
	/*for(unsigned int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}*/

	/*vector<int> w;
	w = v; // Copy constructor. Deep copy.
	v[1] = 4;

	for (unsigned int i = 0; i < w.size(); i++)
	{
		cout << w[i] << endl;
	}

	for (unsigned int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}*/

	/*vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl; // Dereference it.
	}

	vector<int> w(10); // 10 positions or size.
	fill(w.begin(), w.end(), 6);
	for (int i = 0; i < w.size(); i++)
	{
		cout << w[i] << endl;
	}*/

	//for_each(v.begin(), v.end(), MyPrint);
	/*int x, y, z;
	x = 1;
	y = 3;
	z = add(x, y);

	double a, b, c;
	a = b = 2.0;
	c = add(a, b);*/
	
	MyQueue<int> queue;

	queue.Push(5);
	queue.Push(7);
	queue.Push(2);
	
	queue.Pop();
	
	queue.Print();
}
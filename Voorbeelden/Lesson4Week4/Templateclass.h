#pragma once

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Queue
{
	vector<T> data;

public:
	void add(T const& d)
	{
		data.push_back(d);
	}

	void remove()
	{
		data.erase(data.begin()); // "data.pop_back();" zou ook goed zijn.
	}
	
	void Print()
	{
		// Als hij zit te zoeken over unexpected token en must be prefixed with 'typename',
		// zet er dan "typename" voor!
		typename vector<T>::iterator i;
		
		for (i = data.begin(); i != data.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
	}
};
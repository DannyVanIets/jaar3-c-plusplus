#pragma once

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Templateclass
{
	vector<T> data;

public:
	void add(T const &d)
	{
		data.push_back(d);
	}

	void remove()
	{
		data.erase(data.begin());
		// "data.pop_back();" zou ook goed zijn.
	}

	void Print()
	{
		vector<T>::iterator i;
		for(i = data.begin(); i != data.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
	}
};
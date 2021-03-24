#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class MyQueue
{
	vector<T> queue;

public:
	void Push(T const& i)
	{
		queue.push_back(i);
	}

	void Pop()
	{
		queue.pop_back();
	}

	void Print()
	{
		// typename vector<T>::iterator it; DON'T FORGET TYPENAME.
		// for (it = data.begin(); it != data.end(); it++)
		for(int i = 0; i < queue.size(); i++)
		{
			cout << queue[i] << " ";
		}
		cout << endl;
	}
};
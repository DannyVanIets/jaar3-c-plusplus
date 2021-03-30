#include <iostream>

#include "String.h"

using namespace std;

int main()
{
    String s("Hello");
    String b = s;
    String t(" world!");

    t = s;

    cout << s << t << endl;

    String u;
	u = s + t;
    cout << u << endl;
}
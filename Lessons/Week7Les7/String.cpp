#include "String.h"

#include <cstddef> // For null
#include <cstring> // For strlen
#include <iostream>
#include <ostream>

using namespace std;

String::String()
{
	cout << "String()" << endl;
	str = NULL;
	len = 0;
}

String::String(const char* s)
{
	cout << "String(const char*)" << endl;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
}

String::String(const String& s) // Can also just use ": String(s.str)"
{
	cout << "String(const String& s)" << endl;
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
}

String::~String() {
	cout << "~String()" << endl;
	delete[] str;
}

String String::operator=(const String& s)
{
	cout << "Operator=" << endl;
	if(str != NULL) // Even if length is 0, there can be a character in there.
	{
		delete[] str;
	}
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
	return *this;
}

char* String::ToString()
{
	return str;
}

ostream& operator<<(ostream& os, String& s)
{
	os << s.ToString();
	return os;
}

String operator+(const String& s1, const String& s2)
{
	String s;
	s.len = s1.len + s2.len;
	s.str = new char[s.len + 1];
	strcpy_s(s.str, s.len + 1, s1.str);
	strcpy_s(s.str, s.len + 1, s2.str);
	return s;
}
#include "String.h"

#include <cstddef> // For null
#include <cstring> // For strlen
#include <iostream>
#include <ostream>

using namespace std;

String::String() // Constructor.
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

String::~String() { // Delete!
	cout << "~String()" << endl;
	delete[] str;
}

String String::operator=(const String& s)
{
	cout << "Operator=, String" << endl;
	if(str != NULL) // Even if length is 0, there can be a character in there. Delete it!
	{
		delete[] str;
	}
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
	return *this;
}

String String::operator=(const char c)
{
	len = 1;
	str = new char[2];
	str[0] = c;
	str[1] = '\0';
	return *this;
}

char* String::ToString()
{
	cout << "Tostring" << endl;
	return str;
}

ostream& operator<<(ostream& os, String& s)
{
	cout << "operator<<" << endl;
	os << s.ToString(); // We can do this, because both don't use const.
	return os;
}

String operator+(const String& s1, const String& s2)
{
	cout << "operator+, s1 and s2" << s1.str << s2.str << endl;
	String s;
	s.len = s1.len + s2.len;
	s.str = new char[s.len + 1];
	strcpy_s(s.str, s.len + 1, s1.str); // Destination, bytesize and source.
	strcat_s(s.str, s.len + 1, s2.str);
	return s;
}
#pragma once // Make sure that it is only included once.
#include <ostream>

using namespace std;

class String
{
private:
	char* str;
	int len;

public:

	String();
	String(const char* s);
	String(const String& s);
	~String();
	
	String operator=(const String& s);
	String += 
	
	char* ToString();

	friend String operator+(const String&, const String&); // Now it can use the private parts.
	
};

ostream& operator<<(ostream&, String&);
String operator+(const String&, const String&);
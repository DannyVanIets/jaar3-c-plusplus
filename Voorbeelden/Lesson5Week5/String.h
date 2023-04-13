#pragma once // Make sure that it is only included once.
#include <ostream>

using namespace std;

class String
{
private:
	char* str;
	int len;

public: // Use const as much as possible!

	String();
	String(const char* s);
	String(const String& s);
	~String(); // Delete.
	
	String operator=(const String& s); // This is used if you assign it not straight away, but later in the code.
	String operator=(const char c);
	//String operator+=(const String&, const String&); // To be implemented.
	//char* operator[](const int index) const; // To be implemented.
	//bool Search(const String&) const; // To be implemented.
	
	char* ToString(); // If we were to put const here, it would say it wouldn't change.

	friend String operator+(const String&, const String&); // Now it can use the private parts, like len and str.
};

ostream& operator<<(ostream&, String&);
String operator+(const String&, const String&); // You don't want the current classes to change, so we put it here.
void Replace(const int beg, const int end, const String& s); // To be implemented.
bool& operator==(const String& s1, const String& s2); // To be implemented.
bool& operator>(const String& s1, const String& s2); // To be implemented.

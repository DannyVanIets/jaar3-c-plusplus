#include <iostream>

using namespace std;

char* doubleString(const char s[])
{
    int length = strlen(s);
    int lengthPlusItself = strlen(s) + strlen(s);

    char* result = new char[lengthPlusItself + 1];
	
    strcpy_s(result, lengthPlusItself + 1, s);
    strcat_s(result, lengthPlusItself + 1, s);

    return result;
}

void test(const char* s)
{
    char* res = doubleString(s);
    std::cout << res << std::endl;
    delete res;
}

int main(int argc, char** argv)
{
    test("ab");      // abba
    test("abcde");   // abcdeedcba
    test("a");       // aa
    test("");        //

    return 0;
}
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void convertFile(const char* infile_name, const char* outfile_name)
{
	ifstream input;
	ofstream output;
	input.open(infile_name);
	output.open(outfile_name);

	if (input.is_open())
	{
		char character = 0;
		while (input.get(character))
		{
			// Every character is a ASCII character!
			if (character == 48)
			{
				character = 57;
			}
			else if (character == 49)
			{
				character = 56;
			}
			else if (character == 50)
			{
				character = 55;
			}
			else if (character == 51)
			{
				character = 54;
			}
			else if (character == 52)
			{
				character = 53;
			}
			else if (character == 53)
			{
				character = 52;
			}
			else if (character == 54)
			{
				character = 51;
			}
			else if (character == 55)
			{
				character = 50;
			}
			else if (character == 56)
			{
				character = 49;
			}
			else if (character == 57)
			{
				character = 48;
			}
			output << character;
		}
	}
	input.close();
	output.close();
}

void appendAtEnd(const char* filename, const char* s)
{
	ifstream input;
	ofstream output;
	input.open(filename);
	output.open(filename);
	cin.ignore();
	if(input.is_open())
	{
		char character = 0;
		string line;
		while (getline(input, line))
		{
			output << line;
		}
		output << s;
	}
}


int main(int argc, char** argv)
{
	convertFile("input.txt", "output.txt");
	appendAtEnd("io.txt", "Another line\n");
	appendAtEnd("io.txt", "More text. ");
	return 0;
}
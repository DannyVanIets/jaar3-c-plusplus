#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

int exercise2Fractions(int numerator, int denominator) {
	if (numerator % 2 == 0 && denominator % 2 == 0)
	{
		numerator /= 2;
		denominator /= 2;
	}
	else if (numerator % 3 == 0 && denominator % 3 == 0)
	{
		numerator /= 3;
		denominator /= 3;
	}
	return numerator;
}

void exercise3Names() {
	string names[][3] = { {"Hallo", "Test"}, {"Danny", "Julian", "U"}, {"Bertha"} };
	for (int i = 0; i <= 6; i++)
	{
		cout << names[0][i] << endl;
	}
}

void exercise4Palindrome(char palindromeMaybe[10]) {
	int totalLength = strlen(palindromeMaybe);
	bool isPalin = true;

	int i = 0;
	int j = totalLength - 1;

	while (isPalin && i <= totalLength / 2)
	{
		cout << j << endl;
		cout << i << endl;

		cout << palindromeMaybe[i] << endl;
		cout << palindromeMaybe[j] << endl;

		if (palindromeMaybe[i] == palindromeMaybe[j])
		{
			j--;
			i++;
		}
		else
		{
			isPalin = false;
		}
	}
	if (isPalin)
	{
		cout << "Het woord: '" << palindromeMaybe << "' is een palindrome!" << endl;
	}
	else
	{
		cout << "Het woord: '" << palindromeMaybe << "' is geen palindrome!" << endl;
	}
}

void exercise5ReadingTxtFile() {
	ifstream inputFile;
	char* somedata = new char[10];

	inputFile.open("tekst.txt");
	inputFile.read(somedata, 20);

	cout << "In de file tekst.txt staat: " << somedata << endl;

	inputFile.close();
}

struct playerState // Exercise 6.
{
	char name[20];
	int level;
	double health;
	int experience;
};

void exercise7PrintingStates(playerState arrayOfStates[])
{
	for (int i = 0; i < sizeof(arrayOfStates) - 1; i++)
	{
		cout << "Naam: " << arrayOfStates[i].name <<
			" level: " << arrayOfStates[i].level <<
			" health: " << arrayOfStates[i].health <<
			" experience: " << arrayOfStates[i].experience << endl;
	}
}

void exercise8SaveBinaryFile(playerState arrayOfStates[])
{
	ofstream outputFile;
	outputFile.open("game.dat", ios::binary);

	//Validate.
	if (!outputFile.is_open())
	{
		cout << "File is not open!" << endl;
	}
	else
	{
		cout << "File is open!" << endl;
		outputFile.write(reinterpret_cast<char*>(arrayOfStates), 150);
		outputFile.close();
	}
}

void exercise9LoadBinaryFile()
{
	playerState player;
	ifstream input;

	input.open("game.dat", ios::binary);
	if (!input.is_open())
	{
		cout << "File is not open!" << endl;
	}
	else
	{
		cout << "File is open!" << endl;
		input.read((char*)&player, sizeof(player));
		
		while(!input.eof())
		{
			cout << "Playername: " << player.name << endl;
			input.read((char*)&player, sizeof(player));
		}
		input.close();
	}
}

int main()
{
	// Les 2 exercises
	//cout << exercise2Fractions(2, 4) << endl;
	//cout << exercise2Fractions(3, 9) << endl;

	//exercise3Names();

	char test1[10];
	char test2[10];
	//strcpy_s(test1, "racecar");
	//strcpy_s(test2, "nope");
	//exercise4Palindrome(test1);
	//exercise4Palindrome(test2);

	//exercise5ReadingTxtFile();

	playerState arrayOfStates[3] = { {"Hallo", 5, 2.5, 10},
		{"Piet", 10, 15, 30},
		{"Henker", 3, 7, 5}
	};
	//exercise7PrintingStates(arrayOfStates);

	exercise8SaveBinaryFile(arrayOfStates);

	exercise9LoadBinaryFile();
}
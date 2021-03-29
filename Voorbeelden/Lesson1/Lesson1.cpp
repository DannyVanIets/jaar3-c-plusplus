#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>

using namespace std;

struct Date
{
	int day;
	char month[40];
	int year;
};

struct Student
{
	int number;
	char name[40];
	Date birth;
};

struct Team
{
	string name;
	int score;
};

void consoleOutput()
{
	cout << "Hello student.";
	cout << "Hello student?\n";
	cout << "Hello student!" << endl;
}

void consoleInput()
{
	int age;
	cout << "Enter your age: ";
	cin >> age; // >> means that you need to input something. Will be added to this variable.
	cout << "Uw leeftijd is: " << age;
}

void consoleCstrings()
{
	// Console I/O with cstrings.
	// Make sure to "#include <cstring>"!
	const int length = 40;
	char name[length];

	cout << "Wat is je volledige naam: " << endl;
	cin.getline(name, length); // Werkt niet samen met cin >> age!
	cout << "Hallo, " << name << "!" << endl;
}

void structures()
{
	Date tomorrow;

	tomorrow.day = 25;
	strcpy_s(tomorrow.month, "Thursday");
	tomorrow.year = 2021;

	int dayandyear = tomorrow.day + tomorrow.year;

	Student me;
	//me.birth.year = 1998;

	Student group[30];

	strcpy_s(group[0].name, "This is me");
	//group[3].birth.month = "April";
	for(int i = 0; i < 30; i++)
	{
		group[i].number += 1;
	}
}

void fileIO()
{
	// Don't forget to include <fstream>!
	ifstream inputFile; // To insert a file.
	ofstream outputFile; // To output a file, basically to save it.

	inputFile.open("error.txt");
	outputFile.open("test.txt");

	// Opening a binary file
	outputFile.open("error.txt", ios::binary);
	Student student;
	
	// Not possible with ifstream! Writing to binary mostly done with structures.
	outputFile.write((char*)&student, sizeof(student));
	
	// Not possible with ofstream! Read is for ifstream, write with ofstream.
	inputFile.read((char*)&student, sizeof(student));

	// When finished, don't forget to do this:
	inputFile.close();
	outputFile.close();
}

void SaveStudents(char filename[])
{
	Student stud[3];
	ofstream output;

	strcpy_s(stud[0].name, "Bertha");
	stud[0].birth.day = 9;
	strcpy_s(stud[0].birth.month, "4");
	stud[0].birth.year = 1998;
	stud[0].number = 004;
	strcpy_s(stud[1].name, "Iemand");
	stud[1].birth.year = 1998;
	strcpy_s(stud[2].name, "Nogmaals");
	stud[2].birth.year = 1998;
	
	output.open(filename, ios::binary);
	for(int i = 0; i < 3; i++)
	{
		output.write((char*)&stud[i], sizeof(Student));
	}
	output.close();
}

void ShowStudents(char filename[])
{
	Student stud;
	ifstream input;

	input.open(filename, ios::binary);
	if(input.fail() || !input.is_open()) // Does basically the same.
	{
		return; // File not found!
	}
	
	input.read((char*) &stud, sizeof(stud));
	
	while(!input.eof())
	{
		cout << stud.name << endl;
		input.read((char*)&stud, sizeof(stud));
	}
	input.close();
}

string MatchResult(Team team1, Team team2)
{
	// Don't forget to include <sstream>!
	ostringstream sstr; // Output.

	sstr << team1.name << " - " << team2.name;

	while(sstr.str().length() < 25)
	{
		sstr << " ";
	}

	sstr << team1.score << " - " << team2.score;

	return sstr.str();
}

string ConvertToString(float value)
{
	ostringstream sstr;
	sstr << value;

	return sstr.str(); // This is a string! Not a char.
}

void SplitSentence(const string sentence)
{
	istringstream iss(sentence); // Reading from stringstream.
	string word;

	while(iss >> word)
	{
		cout << word << endl;
	}
}

int main()
{
	//consoleOutput();
	//consoleInput();
	//consoleCstrings();

	char filename[] = "student.txt";
	
	SaveStudents(filename);
	ShowStudents(filename);

	Team t1 = {"Mijn team", 12};
	Team t2 = {"Chrisers", 23};

	//cout << MatchResult(t1, t2) << endl;
	//cout << ConvertToString(5.5) << endl;
	//SplitSentence("Dit is een lange zin.");
}
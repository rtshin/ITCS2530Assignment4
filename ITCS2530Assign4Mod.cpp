// ITCS2530Assign4Mod.cpp //

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Main function // 
int main(int argc, char* argv[])
{
	// Declare stream //
	ifstream inFile;

	// Declare string //
	string aVowel;

	// Declare variables //
	int A = 0, E = 0, I = 0, O = 0, U = 0, Z = 0, X = 0, Y = 0, totalVowels = 0, totalNums = 0;

	// Print message //
	cout << "************************************************************" << endl;
	cout << "************ Welcome to my Letter Count Program ************" << endl;
	cout << "************************************************************" << endl;
	cout << endl;

	// If a file is inputted, the name of the file is displayed //
	if (argc > 1) {
		cout << "Analyzing file '" << argv[1] << "'..." << endl;
		cout << endl;
	}
	// Otherwise, an error message is displayed //
	else {
		cout << "No file name specified. Exiting program...";
		return -1;
	}

	// Open the file //
	inFile.open(argv[1]);

	// If the file does not open, an error message is displayed //
	if (!inFile) {
		cout << "There was a problem opening the file. Exiting the program...";
		return -1;
	}

	// Until the end of the file, loop //
	while (!inFile.eof()) {

		// Get the file's data //
		inFile >> aVowel;

		// Check the file's data for vowels and x, y, and z's, and count them //
		for (int x = 0; x < aVowel.size(); x++) {

			if (aVowel[x] == 'A' || aVowel[x] == 'a') {
				A++;
				totalVowels++;
				totalNums++;
			}
			else if (aVowel[x] == 'E' || aVowel[x] == 'e') {
				E++;
				totalVowels++;
				totalNums++;
			}
			else if (aVowel[x] == 'I' || aVowel[x] == 'i') {
				I++;
				totalVowels++;
				totalNums++;
			}
			else if (aVowel[x] == 'O' || aVowel[x] == 'o') {
				O++;
				totalVowels++;
				totalNums++;
			}
			else if (aVowel[x] == 'U' || aVowel[x] == 'u') {
				U++;
				totalVowels++;
				totalNums++;
			}
			else if (aVowel[x] == 'X' || aVowel[x] == 'x') {
				X++;
				totalNums++;
			}
			else if (aVowel[x] == 'Y' || aVowel[x] == 'y') {
				Y++;
				totalNums++;
			}
			else if (aVowel[x] == 'Z' || aVowel[x] == 'z') {
				Z++;
				totalNums++;
			}
		}
	}

	// Print result of counting //
	cout << "The Number of A's: " << setw(40) << setfill('.') << A << endl;
	cout << "The Number of E's: " << setw(40) << setfill('.') << E << endl;
	cout << "The Number of I's: " << setw(40) << setfill('.') << I << endl;
	cout << "The Number of O's: " << setw(40) << setfill('.') << O << endl;
	cout << "The Number of U's: " << setw(40) << setfill('.') << U << endl;
	cout << "The vowel count is: " << setw(39) << setfill('.') << totalVowels << endl;
	cout << "The Number of X's: " << setw(40) << setfill('.') << X << endl;
	cout << "The Number of Y's: " << setw(40) << setfill('.') << Y << endl;
	cout << "The Number of Z's: " << setw(40) << setfill('.') << Z << endl;
	cout << "The total count is: " << setw(39) << setfill('.') << totalNums << endl;


	// Pause screen //
	system("pause");
}

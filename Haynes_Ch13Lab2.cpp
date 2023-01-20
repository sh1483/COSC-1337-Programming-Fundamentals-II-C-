// Steven Haynes
// Program Status: Complete

// A program that reads an encrypted file character by character and makes some change to the character
// before writing that character to a third, now decrypted file.

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;
 
 
int main()
{
	string fileName;
	fstream inFile,
			outFile;
	char ch;
	int number;
	
	
	// Get and open file.
	cout << "Enter the file name: " << endl;
	cin >> fileName;
	
	
	inFile.open(fileName.c_str(), ios::in);
	// Check to ensure file exists.
	if (!inFile)
	{
		cout << fileName << " could not be opened.\n";
		return 1;
	}
	
	
	// Open the file to receive the decrypted copy.
	outFile.open("Decrypted.txt", ios::out);
	if (!outFile)
	{
		cout << "Cannot open the output file." << endl;
		return 2;
	}
	
	
	// Read & write the file character by character.
	ch = inFile.peek();
	while (ch != EOF)
	{

			ch = inFile.get();
			ch -= 2;
			outFile << ch;
		
		ch = inFile.peek();

	}
	
	
	// Close the files.
	inFile.close();
	outFile.close();
	
	if (outFile)
	{
		cout << "\nDecrypted the file." << endl;
	}
	
	else
	{
		cout << "Decryption failure." << endl;
	}


	return 0;
}
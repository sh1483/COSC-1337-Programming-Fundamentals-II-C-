// Steven Haynes
// Program Status: Complete

// A program that accepts from input a sentence with all the words running together, but
// the first character in each word is uppercase, and stores it in the form of a string object.
// The sentence is converted into a string with the words seperated by spaces and only the first
// word is capitalized.

#include <iostream>

using namespace std;


int main ()
{
	string userSentence;	// Declare the string name.
	
	
	// Get user input for the sentence to convert.
	cout << "Enter a sentence with no spaces, where each word is started with "
	 << "a capital letter." << endl;
	cout << "EXAMPLE: YouSmellLikeCheese\n" << endl;
	cin >> userSentence;
	
    // Loop that iterates through the string. For each character in the string.
    for (int index = 0; index < userSentence.size(); index++)
    {
        cout << userSentence[index];	// Print the converted sentence.
        
        if (isupper(userSentence[index + 1]))	// If the next character is upper case.
        {
            cout << " ";	// Insert a space.
            userSentence[index + 1] = tolower(userSentence[index + 1]);	// And convert to lower case.
        }
    }
    return 0;
}
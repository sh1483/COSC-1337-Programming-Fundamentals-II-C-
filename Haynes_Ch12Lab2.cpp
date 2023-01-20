// Steven Haynes
// Program Status: Complete

// A program that accepts c-strings as arguments to 3 functions.
// The UPPER function converts the characters to uppercase.
// The LOWER function converts the characters to lowercase.
// The FLIP function converts the upper characters to lower, and vice versa.
// The MAIN function accepts a string from the user.
// The original string, uppercase string, lower string, and flipped string will all be displayed.

#include <iostream>
#include <cstring>

using namespace std;
 
 
char* flip (char*, int);
char* lower (char*, int);
char* upper (char*, int);
 
 
int main ()

{
    const int SIZE = 46;	// 1 space longer than the longest english word.
    char toManip [SIZE];

     
    // Prompt user for a string.
    cout << "Please enter a string with random upper and lower case letters.\n";
    // Read in the string.
    cin.getline(toManip, SIZE);
    // Display the string.
    cout << "\nYour original string: " << toManip << endl;

     
    // Call functions.
    flip(toManip, SIZE);
    lower(toManip, SIZE);
    upper(toManip, SIZE);

return 0;    
}


// Function that flips the case of the string.
char* flip (char * string, int SIZE)
{
	for(int index = 0; index < SIZE; index++)
   
	// Using ASCII numbering for lower case and upper case.
	if (string[index] >= 'a' && string[index] <= 'z')
    	string[index] = string[index] - 32;
    
    else if (string[index] >= 'A' && string[index] <= 'Z')
    	string[index] = string[index] + 32;
     
    cout << "Your string, with the case flipped: ";
    cout << string << endl;
    
return 0;
}
 
     
// Function that puts the string in all lower case.
char* lower (char * string, int SIZE)
{
    for(int index = 0; index < SIZE; index++)
    	string[index]=tolower(string[index]);

    cout << "Your string in all lowercase: ";
    cout << string << endl;
    
return 0;
} 
     
     
// Function that puts the string in all caps.
char* upper (char * string, int SIZE)
{
    for(int index = 0; index < SIZE; index++)
    	string[index]=toupper(string[index]);

    cout << "Your string in all uppercase: ";
    cout << string << endl;
    
return 0;
}

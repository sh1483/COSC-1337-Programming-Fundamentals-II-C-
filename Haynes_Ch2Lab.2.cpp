// Steven Haynes
// Program Status: Complete

// A program that converts inches to feet and inches


#include <iostream>
using namespace std;

main()
{
	// Set the player height in inches.
	int playerHeightInches = 75;
	
	// Determine and set player height in feet.
	int heightFeet = playerHeightInches / 12;
	
	// Determine and set the remaining inches of height.
	int heightRemainder = 75 % 12;
	
	// Print the conversion.
	cout << "A " << playerHeightInches << " inch tall basketball player is " << heightFeet << " feet " << heightRemainder << " inches tall.";
}
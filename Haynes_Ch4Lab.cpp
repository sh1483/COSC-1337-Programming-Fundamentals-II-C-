// Steven Haynes
// Program Status: Complete

// A program that uses a user menu to select a medium, and user input
// of feet the soundwave will travel in the selected medium.
// The amount of time in seconds to the 4th decimal place will be displayed,
// or an error message will display.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Set the constants of the mediums.
	const double AIR = 1100.0;
	const double WATER = 4900.0;
	const double STEEL = 16400.0;
	
	int medium;
	int distance;
	double time;
	
	// Display the menu, get user choices.
	cout << "This program will tell you how long it takes a sound wave \n";
	cout << "to travel a specific distance through a particular medium.\n\n";
	
	cout << "Select a substance for the sound to travel through: \n";
	cout << "1. Air\n";
	cout << "2. Water\n";
	cout << "3. Steel\n";
	cin >> medium;
	
	
	// Set formatting for output to 4 decimal places.
	cout << fixed << showpoint << setprecision(4);
	
	// Use the medium selection to execute the correct action.
	if (medium == 1)
	{	cout << "\nEnter the number of feet the sound wave will travel: \n";
		cin >> distance;
		time = distance / AIR;
		cout << "\nThe sound wave will travel " << distance << " feet through air in " << time << " seconds.";
	}
	
	else if (medium == 2)
	{	cout << "\nEnter the number of feet the sound wave will travel: \n";
		cin >> distance;
		time = distance / WATER;
		cout << "\nThe sound wave will travel " << distance << " feet through water in " << time << " seconds.";
	}
	
	else if (medium == 3)
	{	cout << "\nEnter the number of feet the sound wave will travel: \n";
		cin >> distance;
		time = distance / STEEL;
		cout << "\nThe sound wave will travel " << distance << " feet through steel in " << time << " seconds.";
	}
	
	// Create an error message.
	else if (medium != 3)
	{	cout << "\nThat is not a valid choice!";
	}
	
	return 0;
}
	
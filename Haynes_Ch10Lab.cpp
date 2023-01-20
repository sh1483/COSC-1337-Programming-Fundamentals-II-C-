// Steven Haynes
// Program Status: Complete

// A program that gathers statistical data about the number of movies college students see a month.
// It ask the user how many students were surveyed & dynamically allocates an array of that size.
// It then sorts the scores and calculates the average.

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


// Get's the data, as a positive integer.
	void getData (int *, int);
		
	// Sorts the array in ascending order (A-Z)
	int sortData (int *, int);
	
	// Displays the data.
	int showData (int *, int);
	
	// Averages the data.
	void avgData (int *, int);


// Accepts the number of students from the user and dynamically creates an array large enough to contain
// the number of movies watched for each student. Uses input validationt to ensure entries are a
// positive integer.
// Prints the average and frees the allocated array when complete.
int main()

{
	
	int *data = nullptr;	// Dynamically allocates an array.
	int numStudents;	// Holds the number of students in the array.
	double avg;		// Holds the average.
	
	data = new int[numStudents];	// Allocate memory.
	
	bool valid = false;	// For input validation.
	


	
	// Input validation for positive integer.
	do{
		// User input for students surveyed,	
		cout << "How many students were surveyed?\n";
		cin >> numStudents;
		
		if (!cin.fail())	// If input is an integer.
		{
			if (numStudents > 0 )	// If input is positive.
			{
				valid = true;
			}
			else
			{
				cout << "Integer must be positive." << endl;
			}
		}
		else
		{
			cout << "That is not an integer." << endl;
			cin.clear();	// Clear what was entered.
			cin.ignore(INT_MAX, '\n');
		}
	}while (!valid);
	
	
	
	getData (data, numStudents);	// Call getData
	
	sortData (data, numStudents);	// Call sortData
	
	showData (data, numStudents);	// Call showData
	
	avgData (data, numStudents);	// call avgDate

delete [] data;
data = nullptr;

}


void getData(int *array, int numStudents)

{

bool valid = false;	// For input validation (local).

	// User input for data collected.
	cout << "Enter the data for each student below.\n";
	for (int index = 0; index < numStudents; index++)

// Input validation for positive integer.
	do{
		
			cout << "Student " << (index + 1) << ": ";	// For n student, enter data.
			cin >> *(array + index);
		
		if(!cin.fail()){	// If input is an integer.
		
			if (*(array + index) > 0) {	// If input is positive.	
			valid = true;
			}
			else
			{
				cout << "\nThe number of movies watched should be a positive integer" << endl;
				index = index - 1;	// Back to the correct index.
				cin.clear();	// Clear what was entered.
				cin.ignore(INT_MAX, '\n');
			}		 
		}
		else
		{
			cout << "That is not an integer." << endl;
			index = index - 1;	// Back to the correct index.
			cin.clear();	// Clear what was entered.
			cin.ignore(INT_MAX, '\n');
		}
	}while (!valid);

}


int sortData(int *array, int numStudents)
{
	
	{int sorted;	// Holds sorted data.
	}
	
	sort(array, array + numStudents);
	
	for (int index = 0; index < numStudents; index++)
	
	return index;	//sorted
	
}


void avgData(int *array, int numStudents)

{
	int sum = 0;
	double avg = 0.0;
	
	for (int index = 0; index < numStudents; index++)
		{
		sum += *array;
		array++;
		}
	
	avg = (double)sum/numStudents;

	// Seperate header for the average.
	cout << "--------------";
	
	// Prints out the average to two decimals.
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Average\t" << avg << endl;
	
}


int showData(int *array, int numStudents)

{
	// Create a header.
	cout << "\nNumber of Movies Watched" << endl;
	cout << "------------------------" << endl;
	
	for (int count = 0; count < numStudents; count++)
	{	
	cout << *(array + count) << endl;
	}
	
	return *array;
	
}

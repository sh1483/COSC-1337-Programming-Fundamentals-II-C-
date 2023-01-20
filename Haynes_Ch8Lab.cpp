// Steven Haynes
// Program Status: Complete

// A program that includes a class (PayRoll) that has data for an employee's hourly pay rate and # of hours worked.
// The class has a member function to set the hourly pay rate and number of hours worked, and to calculate gross pay.
// The main() creates an array of 7 PayRoll objects. It contains 2 loops. 1 loop reads the # of hours and hourly rate
// from a file, and calls the class set functions to store the info in the appropriate objects.
// The 2nd loop calls the class function once per object, returns the employee's gross pay, and displays it.


#include <iostream>
#include <fstream>	// For reading a file
#include <iomanip>	// To setprecision

using namespace std;


// Class declaration
class PayRoll
{
 
  private:
  	
	double hours,		// Member variable to hold the employee's worked hours.
	rate;		    	// Member variable to hold the hourly pay rate.

	public:

		PayRoll()    		// Constructor 
		{
			hours = 0;		// Accumulator for hours worked.
			rate = 0;		// Accumulator for pay rate.
		}
	
		void setHours(double x)	// Setter for hours
		{
			hours = x;
		}

		void setRate(double y)	// Setter for pay rate
		{
			rate = y;
		}
		
		double getHours()	// Getter for hours
		{
			return hours;
		}

		double getRate()	// Getter for pay rate
		{
			return rate;
		}

		double grossPay()	// grossPay as hours * rate
		{
			return hours * rate;
		}
};
  

int main()
{
	PayRoll employees[7];	// Call PayRoll, set the number of employees to 7 stored in the array named employees
	
	ifstream inFile;	// Set to read data from file (didn't work without the full path for some reason)
	inFile.open("C:\\Users\\Steven\\Desktop\\ACC\\Summer 2022\\COSC 1337 Programming Fundamentals II Python\\Module 2\\Chapter 8\\payroll.dat");
	
	if (!inFile)
	cout << "Error opening file.\n";	// Set an error message.
	
	else
	
		for (int x = 0; x < 7; x++)	// First loop
	{
		double hours,
		rate;
		
		inFile >> hours;	// Read in the hours worked
		inFile >> rate;		// Read in the pay rate
		
		employees[x].setHours(hours);
		employees[x].setRate(rate);
	}
	
	inFile.close();		// Gotta close that file!
	
	cout << "Employee\t" << "Gross Pay\n";	// Print out the headers.
	cout << "========\t" << "=========\n";
	
	for (int x = 0; x < 7; x++)		// 2nd loop through
	{
		cout << fixed << showpoint << setprecision(2);	// To 2 decimal places
		cout << "   " << x+1 << ":\t" << "\t$ " << employees[x].grossPay() << endl;	// Print out employee # and gross pay
	}
	
	return 0;
}
// Steven Haynes
// Program Status: Complete

// A program that includes a class (Tips) that calculates gratuity.
// Tips uses a variable, taxRate, set by a 1-parameter constructor to the rate passed to Tips
// if an object is created, otherwise it defaults to .085 tax rate. The public function (computeTip)
// accepts 2 arguments, total bill amount and tip rate. It computes the cost of a meal, pre-taxes,
// then applies the tip. The program uses a loop to let the user input multiple bills and tip rates.
// Data is validated for tax rate.

#include <iostream>
#include <iomanip>

using namespace std;


// Class declaration
class Tips
{
  private:
  	
	double taxRate;		    	// Member variable to hold the tax rate.

	public:

	Tips(double rate)    		// Constructor that accepts a user tax rate
	{                          	// or uses a default value of 8.5%
		if (rate >= 0)
			taxRate = rate;
		else
			taxRate = .085;

}
  

	double computeTip(double, double); // Public prototype declared.
};


double Tips::computeTip(double totalBill, double tipRate) // Define computeTip
{
	double mealPrice = totalBill - (totalBill/(1+taxRate)*taxRate); // Remove taxes from the bill
	
	double tipAmount = mealPrice * tipRate; // Determine tip without taxes.

	return tipAmount;
}
   



	
int main()
{
	
	
	char yn;  		// Variables set.
	double taxRate,			
	tipAmount,			
	totalBill,		
	mealPrice,
	tipRate;		
	
	// Input and validate the tax rate
	cout << "Tax % for this location: ";
	cin >> taxRate;
	
	while (taxRate < 0)
	{ cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
	cin >> taxRate;
	}
	

	// Convert taxRate to decimal.
	taxRate = (taxRate/100);
	
	// A Tips Object with the taxRate
	Tips tipHelper(taxRate);

	// do-while loop to let user enter various bills and tip rates.
	do
	{
		cout << "\n************* Tip Helper *************\n" << endl;

		// User input for bill amount
		cout << "Enter the total bill amount: ";
		cin >> totalBill;

		// User input for tip amount
		cout << "Enter desired tip % ";
		cin >> tipRate;

		// Convert from % to decimal
		tipRate = (tipRate/100);

		// Use the Tips class to compute the tip
		tipAmount = tipHelper.computeTip(totalBill, tipRate);

		// Display the tip amount to 2 decimal places.
		cout << fixed << showpoint << setprecision(2);
		cout << "\n The tip should be $ " << tipAmount << endl;
		

		// Repeat option for the user.
		cout << "Compute another tip (y/n)? ";
		cin >> yn;
	}
	
		while (yn == 'y' || yn == 'Y');
	
		return 0;

	}
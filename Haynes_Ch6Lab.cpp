// Steven Haynes
// Program Status: Complete

// A program that determines which division has
// the greatest sales for a quarter. Includes the functions getSales and findHighest,
// called by main.

#include <iostream>
#include <string>
using namespace std;


double getSales(string division); 	// prototype
void findHighest(double, double, double, double);	//prototype


int main()
{

	string Northeast,	// defined variable.
		   Southeast,	// defined variable.
	 	   Northwest,	//defined variable.
		   Southwest;	//defined variable.


	double neSales,	// Holds the returned values.
		seSales,
		nwSales,
		swSales;
	
	neSales = getSales("Northeast");	// Calling getSales, passing division name,
	seSales = getSales("Southeast");	//  & receiving sales data back from getSales.
	nwSales = getSales("Northwest");	
	swSales = getSales("Southwest");	
	
	findHighest(neSales, seSales, nwSales, swSales); // Passing the sales to findHighest
		
}


double getSales(string division)
{

	double divSales;
	
	cout << "Enter the quarterly sales for the " << division << " division: " << endl;
	cin >> divSales;
		
	while (divSales < 0)	// Input validation loop.
	{cout << "Sales figures cannot be negative. Please re-enter.";
	cout << "Enter the quarterly sales for the " << division << " division: " << endl;
	cin >> divSales;
	}
	return divSales; // Return divSales to main.
}


void findHighest(double neSales, double seSales, double nwSales, double swSales)
{
				
	if ((neSales >= seSales) && (neSales >= nwSales) && (neSales >= swSales))
		{
		cout << "\nThe Northeast division had the highest sales this quarter." << endl;
		cout << "Their sales were $" << neSales << endl;}
	
	else if ((seSales >= neSales) && (seSales >= nwSales) && (seSales >= swSales))
		{
		cout << "\nThe Southeast division had the highest sales this quarter." << endl;
		cout << "Their sales were $" << seSales << endl;}
	
	else if ((nwSales >= neSales) && (nwSales >= seSales) && (nwSales >= swSales))
		{
		cout << "\nThe Northwest division had the highest sales this quarter." << endl;
		cout << "Their sales were $" << nwSales << endl;}
		
	else if ((swSales >= neSales) && (swSales >= seSales) && (swSales >= nwSales))
		{
		cout << "\nThe Southwest division had the highest sales this quarter." << endl;
		cout << "Their sales were $" << swSales << endl;}
	
	
}
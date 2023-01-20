// Steven Haynes
// Program Status: Complete

// A program that determines needed sales price for an $8 item with a desired
// 35% profit


#include <iostream>
using namespace std;

main()
{
	// Setting the initial price.
double ourPrice = 8.00;

// Determining the price needed for a 35% profit.
double salesPrice = (ourPrice * 0.35) + ourPrice;

// Print the results.
cout << "To have a 35% profit, the flash drive should sell for $" << salesPrice;
}
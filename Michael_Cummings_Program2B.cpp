// Michael Cummings

// CIS-5 Online



// Program 2B: This program will ask the user for the meal charge and calculate the total of the resturant bill.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declare variables and constants
	float mealCharge, tax, tip, total;
	
	const float TAX_RATE = 0.08;
	const float TIP_RATE = 0.2;

	// prompt user for meal charge
	cout << "Enter the bill total" << endl << endl;
	cin >> mealCharge;

	// calculate tax
	tax = mealCharge * TAX_RATE;

	// calculate tip
	tip = mealCharge * TIP_RATE;

	// calculate total
	total = mealCharge + tax + tip;

	// Welcome message
	cout << "Welcome to laser wars cantina. Home of that one song." << endl << endl;
	
	// display formatted receipt
	cout << setfill('.');
	cout << left << setw(15) << "Food Items " << right << setw(15) << fixed << setprecision(2) << " $" << mealCharge << endl;
	cout << left << setw(15) << "Tax 8% " << right << setw(15) << fixed << setprecision(2) << " $" << tax << endl;
	cout << left << setw(15) << "Tip 20% " << right << setw(15) << fixed << setprecision(2) << " $" << tip << endl << endl;
	
	cout << setfill(' ');
	cout << left << setw(29) << "Total" << "$" << setprecision(2) << fixed << total;



	return 0;
}
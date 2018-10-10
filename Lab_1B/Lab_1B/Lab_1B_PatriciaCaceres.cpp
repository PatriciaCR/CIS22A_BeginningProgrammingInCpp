/**************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 1B: This program calculates and displays the tax amount, tip amount and total bill
*of a meal charge entered by the user.
*Name: Patricia Caceres.
*/	
/**************************************************************************************/

#include<time.h>		// Used to calculate the date
#include <string>
#include <iostream>
#include <iomanip>		// Output Formatting
#include <stdlib.h>		//Clear Output
using namespace std;

int main()
{

	//Definition of variables as doubles:
	//Meal charge:mealch, Tax amount:taxam, Meal total:mealtot, Tip amount:tip.
	double mealch, taxam, mealtot, tip;

	char date[9];		//Definition of date
	_strdate_s(date);

	cout << endl;
	cout << " Please enter your meal charge: ";		//Asks the user to enter the meal charge
	cin >> mealch;
	system("CLS");		//Clear Output before displaying the receipt.

	//Calculation of the tax amount, tip amount and total amount for the meal based on the meal charge entered by the user
	taxam = mealch*0.0675;
	mealtot = taxam + mealch;
	tip = mealtot*0.15;
	mealtot = mealtot + tip;

	//Display of the results: Meal charge, Tax amount, Tip amount and the total bill for the meal.
	cout << string(43, '-') << endl;
	cout << setw(30) << "Corner Bistro\n\n";		//Name of the Restaurant
	cout << " 1785 Ridgetree Way, 95131, CA.\n";	//Address
	cout << " Phone: 408-5554444\n";				//Phone
	cout << " Date: " << date << setw(29) << "Order # 1\n";										//Date and Order #
	cout << string(43, '-') << endl;
	cout << "\n Meal charge" << setw(25) << setprecision(2) << fixed << mealch << " $";			//Meal charge
	cout << "\n Subtotal   " << setw(25) << mealch << " $\n";
	cout << endl << string(43, '-') << endl << endl;
	cout << setw(25) << "Tax" << setw(12) << setprecision(2) << fixed << taxam << " $\n";		//Tax
	cout << setw(25) << "Tip" << setw(12) << tip << " $\n\n";									//Tip
	cout << string(43, '-') << endl << endl;
	cout << setw(26) << "TOTAL" << setw(11) << mealtot << " $" << endl << endl;					//Total bill
	cout << string(43, '-') << endl;
	cout << setw(30) << "Thanks for coming" << endl;
	cout << setw(40) << "We look forward to seeing you soon!";
	cout << endl << endl << endl;

	//End of the program.
	system("pause");
	return 0;

}
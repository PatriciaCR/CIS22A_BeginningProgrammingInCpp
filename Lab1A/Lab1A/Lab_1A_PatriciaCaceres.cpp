/**************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 1A: This program calculates and displays the tax amount, tip amount and total bill
*of a given meal charge ( $ 44.50 ).
*Name: Patricia Caceres.
*/
/**************************************************************************************/

#include <string>
#include <iostream>
#include <iomanip> // Output Formatting
using namespace std;

int main()
{

	//Definition of variables as doubles:
	//Meal charge:mealch, Tax amount:taxam, Meal total:mealtot, Tip amount:tip.
	double mealch = 44.50, taxam, mealtot, tip;

	//Calculation of the tax amount, tip amount and total amount for the meal based on the meal charge given: $ 44.50.
	taxam = 44.50*0.0675;
	mealtot = taxam + mealch;
	tip = mealtot*0.15;
	mealtot = mealtot + tip;

	//Display of the results: Meal charge, Tax amount, Tip amount and the total bill for the meal.
	cout << string(43, '-') << endl;
	cout << setw(30) << "Restaurant Bill\n";
	cout << string(43, '-') << endl;
	cout << "\n Meal charge" << setw(25) << setprecision(2) << fixed << mealch << " $";
	cout << "\n Subtotal   " << setw(25) << mealch << " $\n";
	cout << endl << string(43, '-') << endl << endl;
	cout << setw(25) << "Tax" << setw(12) << setprecision(2) << fixed << taxam << " $\n";
	cout << setw(25) << "Tip" << setw(12) << tip << " $\n\n";
	cout << string(43, '-') << endl << endl;
	cout << setw(26) << "TOTAL" << setw(11) << mealtot << " $";
	cout << endl << endl << endl;

	//End of the program.
	system("pause");
	return 0;

}
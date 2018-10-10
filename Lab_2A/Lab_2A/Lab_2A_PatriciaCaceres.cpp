/*****************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 2A:This program calculates and displays the amount of money that Joe paid for the
*stock, the commision he paid when he bought the stock, the amount that Joe sold the stock
*for, the amount of commision he paid when he sold the stock for and the profit he made
*with the information of the transaction entered by the user.
*
*Name: Patricia Caceres.
*/
/*****************************************************************************************/

#include<iostream>
#include <string>
#include <iomanip>		// Output Formatting.
#include <stdlib.h>		//Clear Output.

using namespace std;

int main()
{

	double  Sharpurch, Pricexshar, Sharsold, Pricexsharesold, Amopaid, CommpaidB, Amosold, CommpaidS, PROFIT; //Defining as doubles all the variables used.

	//Asks the user for information about the transaction
	cout << "\n Hello! Every time you insert a data please press <Enter>, Thank you!\n\n";
	cout << " How many shares did Joe purchased?\n "; cin >> Sharpurch;
	cout << "\n How much money did Joey pay per share?\n "; cin >> Pricexshar;
	cout << "\n How many shares did Joe sell?\n "; cin >> Sharsold;
	cout << "\n How much money did Joe sell each share?\n "; cin >> Pricexsharesold;

	system("CLS"); // Clear the output before displaying the results.

	//Calculations
	Amopaid = Sharpurch*Pricexshar; //Amount paid for the stock
	CommpaidB = Amopaid*0.02; //Commision paid when Joe bought the stock 
	Amosold = Sharsold*Pricexsharesold; //Amount that Joe sold the stock for
	CommpaidS = Amosold*0.02; //Commision paid when Joe sold the stock
	PROFIT = Amosold - Amopaid - CommpaidB - CommpaidS; //Profit after all the transaction

	
	//Display of the results obtained
	cout << string(60, '-') << endl;
	cout << " Stock Bought:" << endl; //Information about the stock Joe bought.
	cout << "\tQuantity of shares purchased" << setw(18) << Sharpurch << endl; //Quantity of shares purchased
	cout << "\tPrice per share" << setw(34) << setprecision(2) << fixed << Pricexshar<<" $" << endl; //Price per share bought
	cout << "\tComission Paid to the broker" << setw(21) << setprecision(2) << fixed << CommpaidB << " $" << endl; // Comission paid to the broker when Joe bought the stock
	cout << "\tAmount Paid for the stock" << setw(24) << setprecision(2) << fixed << Amopaid << " $" << endl; //Amount paid for the stock
	cout << string(60, '-') << endl;
	cout << " Stock Sold:" << endl; //Information about the stock Joe sold 
	cout << "\tQuantity of shares sold" << setw(23) << setprecision(0) << fixed << Sharsold << endl; //Quantity of shares Joe sold 
	cout << "\tPrice per share" << setw(34) << setprecision(2) << fixed << Pricexsharesold << " $" << endl; //Price per share sold
	cout << "\tComission Paid to the broker" << setw(21) << setprecision(2) << fixed << CommpaidS << " $" << endl; //Commission paid to the broker when Joe sold the stock
	cout << "\tAmount that Joe sold the stock for" << setw(15) << setprecision(2) << fixed << Amosold << " $" << endl; //Amount that Joe sold the stock for 
	cout << string(60, '-') << endl;
	
	//Profit after selling the stock 
	if (PROFIT >= 0)
	{
	cout << " The amount of profit Joe made after selling his stock" << endl;
	cout << " and paying the two commissions to his broker was: " << setprecision(2) << fixed << PROFIT << " $\n\n";   
	}
	else
	{
	cout << " The amount of money that Joe lost after selling his stock" << endl;
	cout << " and paying the two commissions to his broker was: " << setprecision(2) << fixed <<-PROFIT << " $\n\n";
	}

	//End of the program
	system("pause");
	return 0;

}
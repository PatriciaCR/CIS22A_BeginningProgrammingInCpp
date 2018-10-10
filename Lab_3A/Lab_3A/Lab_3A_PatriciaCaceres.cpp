/******************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 3A: This is a change-counting game. This program calculates the sum of the different 
*number of coins (pennies,nickels,dimes and quarters)the user inserts, then it compares 
*this sum with 100 (1 dolar), if the sum is equal to 100 the user will win the game, if not 
*the program will display whether the amount entered was more than or less than one dollar.
*
*Name: Patricia Caceres.
*/
/******************************************************************************************/

#include<iostream>
#include<iomanip>		
#include <string>
#include <stdlib.h>		//Clear Output.
using namespace std;

int main()
{

	//Definition of variables
	int penny = 1, nickel = 5, dime = 10, quarter = 25; //Define as a constant integer the value of the coins(pennies,nickels,dimes and quarters).
	int NumberP, NumberN, NumberD, NumberQ; //Define as integer the number of coins entered by the user.
	double Sum; // Define as double the sum of the coins.

	//Instructions of the game to help the user know what the program will do.
	cout << "\n Hello! This is a change-counting game the instructions are pretty basic, to\n";
	cout << " win you just have to insert the number of coins (pennies,nickels,dimes or\n";
	cout << " quarters) that you think will add to ONE dollar.\n\n Ready?, Let's begin:\n\n";
	
	//Asks the user to insert the number of pennies,nickels,dimes and quarters.
	cout << "  Please Insert the numbers of pennies,nickels,dimes and quarters separated\n";
	cout << "  by a space then press <Enter>\n\n";
	cin >> NumberP >> NumberN >> NumberD >> NumberQ;

	//The program calculates the sum of the coins inserted by the user, (summatory of number of coins*value of the coin). 
	Sum = NumberP*penny + NumberN*nickel + NumberD*dime + NumberQ*quarter;

	system("CLS"); // Clear the output before displaying the results.

	//After the program calculates the sum of the coins it will compare the result of the sum with 100 (1 dollar)
	if (Sum == 100) //If the sum is equal to 100 the program will congratulate the user for winning the game.
	{
		cout << string(48, '-') << endl<<endl;
		cout <<"\tC O N G R A T U L A T I O N S !\n\n";
		cout << string(48, '-') << endl<<endl;
		cout << "  The total value of the coins you inserted is\n   exactly one dollar, You have won the game!\n\n\n";
	}
	else if (Sum>100) //If the sum is more than 100 the program will display that the amount of coins inserted is more than one dollar.
	{
		cout << string(47, '-') << endl<<endl;
		cout << setw(34) << "G A M E   O V E R\n\n";
		cout << string(47, '-') << endl << endl;
		cout << "\n The amount of coins you inserted gives a total\n"<<setw(8)<< "of: " << Sum / 100 << setprecision(2) << fixed << "$ which is more than one dollar"<<endl;
		cout<<setw(34)<<"You lose the game\n\n";
	}
	else //If the sum is less than 100 the program will display that the amount of coins inserted is less than one dollar.
	{
		cout << string(47, '-') << endl << endl;
		cout << setw(34) << "G A M E   O V E R\n\n";
		cout << string(47, '-') << endl << endl;
		cout << "\n The amount of coins you inserted gives a total\n" << setw(8) << "of: " << Sum / 100 << setprecision(2) << fixed << "$ which is less than one dollar" << endl;
		cout << setw(34) << "You lose the game\n\n"; 

	}

	//End of the program
	system("pause");
	return 0;

	}
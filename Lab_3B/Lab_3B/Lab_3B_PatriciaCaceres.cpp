/******************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 3A: This program asks the user to enter a month (in numeric form),a day, and a two 
*digit year. After that the program should determine whether the month times the day is 
*equal to the year. If so, it should display a message saying the date is magic. Otherwise,
*it should display a message saying the date is not magic.
*
*Name: Patricia Caceres.
*/
/******************************************************************************************/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	
	int month, day, year,Magic; // Define the variables as Integer.

	cout << string(90, '-') << endl<<endl;
	cout <<setw(53)<< "**Magic dates**\n\n";
	// Instructions of the program. 
	cout << " Instructions: This program calculates if a date is Magic, a date is magic if the month\n";
	cout << " times the day is equal to the year. For example: The date June 10, 1960 is magic\n"; 
	cout << " because when we write it in the following format, the month times the day equals the\n";
	cout << " year. 6 / 10 / 60\n\n";
	cout << string(90, '-') << endl << endl;
	cout << "\n Please enter a month(in numeric form),a day, and a two-digit year separated by a space\n";
	cout << " then press <Enter>\n\n"; // Asks the user to enter a month, day and a two-digit year.
	cin >> month>> day>> year; // Read the month,day and year entered by the user.
	cout <<endl<< string(90, '-') <<endl <<endl;
	
	if (month <= 0 || month > 12 || day <= 0 || day > 31 || year <= 0 || year > 99) // Restriction of the variables month,day and year.
		// If the user does not enter even one valid number display "You did not enter a valid number" and end the program.
		cout <<setw(63)<< "You did not enter a valid number :("; 
	// If the numbers entered by the user are valid contine the program.
	else 
	{
		Magic = month*day; // Calculate month times the day.
		
		// If month times the day is equal to the year display The date is magic if not display the date is not magic.
		if (Magic == year)
			cout << setw(54) << "**The date is Magic**";
		else
			cout << setw(54) << "The date is not Magic";
	}
	// End of the program.
	cout << endl << endl;
	system("pause");

}


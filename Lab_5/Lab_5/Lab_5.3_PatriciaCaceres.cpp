
#include <iomanip>
#include <string>
#include <iostream>
#include<cmath>
using namespace std;


int main()
{

	int numberdays; //Define as integer the number of days
	int cont;    //Counter for days.
	double result, finalres = 0; //Result=Variable for the amount of dollars on a certain day, finalres= Storage the total pay (Summatory of the salary for each day)
	double pennies; //Variable were will be storage the amount of cents on a certain day.


	cout << string(97, '-');
	cout << "\n\n CIS 22A, Winter 2015.\n\n";
	cout << " Lab 5: This program will calculate how much the user will earn over a period of time inserted\n";
	cout << " if his or her salary doubles each day (1 cent the first day, 2 cents the second day...). After \n";
	cout << " that it should display how much the salary was for each day and the total pay for the end of \n";
	cout << " the period. (This program will use the for loop)\n\n";
	cout << " Name: Patricia Caceres \n\n";
	cout << string(97, '-') << endl << endl;

	cout << "Please insert the number of days you worked, then press <Enter>\n\n"; //Ask the user to insert the numbers of days worked
	cin >> numberdays;


	while (numberdays < 1) //Validate the number of days(If the number is less than one the program will ask the user to insert again the number of days)
	{
		cout << string(90, '-') << endl << endl;
		cout << "You did not inserted a valid number of days, Try again...\n\n";
		cout << "Please insert the numbers of days you worked, then press <Enter>\n\n";
		cin >> numberdays;
	}

	cout << endl << string(30, '-') << endl;
	cout << left << setw(9) << " Day" << right << setw(11) << "Salary" << endl; //Table of results
	cout << string(30, '-') << endl << endl;

	for (cont = 0; cont <= numberdays;cont++)
	{
		pennies = pow(2, cont); //Doubles the salary for certain day
		result = pennies / 100; //Transforms the amount of cents earned in certain day from cents to dollars
		cout << "  " << left << setw(12) << cont << "$ " << setprecision(2) << fixed << result << endl;  //Display the day and the salary in dollars for that day.
		finalres = finalres + result; //Calculates the total salary(Summatory of the amount of dollars for each day)
	
	}
	
	cout << string(60, '-') << endl << endl;
	cout << "Final salary (at the end of the period):  $ " << finalres; //Display the total salary
	cout << endl << endl << string(60, '-') << endl << endl;
	system("pause");
	return 0;
}
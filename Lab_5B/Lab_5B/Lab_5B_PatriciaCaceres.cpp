/*****************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 5B:This program will display a matrix. First it will ask the user to insert the number
*of rows and columns the matrix will have, and then it will display the matrix printed as 
*row#,col#. (This program will only use do-while loops).
*
*Name: Patricia Caceres.
*/
/*****************************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int row, column,contr=1,contc=1; //Define as integer number of rows, columns, and counter of rows and columns.
	cout<<string(70, '-')<<endl<<endl;
	cout << "Hi! This program will display a matrix from the values you will insert" << endl<<endl; 
	cout << " Please introduce the number of rows and colums (separated by a space)\n you want the matrix to have, then press <Enter>\n\n"; //Ask the user for the values of column and row
	cin >> row >> column; //Read rows and columns
	cout << string(70, '-') << endl << endl;
	
	do //Row
	{
		do //Column
		{
			cout << contr << "," << contc << "   "; //Print the matrix row#,col#
			contc++; //Increase the counter for columns in one

		} while (contc <= column); //Repeat while counter of columns is less or equal to the # of colums inserted by the user

	contc = 1; //Restart the counter for columns
	contr++; //Increase the counter for rows in one.
	cout << endl;

	} while (contr <= row); //Repeat while counter of rows is less or equal to the # of rows inserted by the user

	cout << endl << endl;
	system("pause");
	return 0;
}
/*****************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Lab 6: This program will copy a sequence of characters from an input file and store it 
*on an output file.
*
*Name: Patricia Caceres.
*/
/*****************************************************************************************/


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	//Open an input and an otput file.
	fstream infile("input.txt", ios::in);
	fstream outfile("output.txt", ios::out);

	cout << string(60, '-')<<endl;
	cout << "\nHello! This program will copy a sequence of characters from\nan input file and storage it on a output file.\n\n";
	cout << string(60, '-')<<endl<<endl;
	
	//Define the variable CHAR as a character (Used to read every character of the input file)
	char CHAR;

	if (infile)  //If the file is successfully opened,process it.
	{
		while (infile.get(CHAR))  //Read a character from the input file (Terminates the loop when there is no other character to be read from the input file)
			outfile << CHAR; //Writes the character that was read from the input file on the output file.
		cout << "All done! Go check the output file.\n";

	}
	else // Display an error message
		cout << "Error opening the file\n";

	//Close input and output files
	infile.close(); 
	outfile.close();
	
	//End of the program 
	cout << endl << endl;
	system("pause");
	return 0;
}
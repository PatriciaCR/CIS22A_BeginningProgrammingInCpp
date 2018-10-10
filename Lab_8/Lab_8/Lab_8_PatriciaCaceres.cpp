/**************************************************************************************************************************/
/*
CIS 22A, Winter 2015.
L A B   8   :   P S E U D O C O D E

M A I N   F U N C T I O N :
1)Begin the program
2)Ask the user for the number of scores he/she will like to insert.
3)Read the number of scores the user inserted.
4)Ask the user if he/she will like to insert the names and scores of the section from a file or the screen.
5)Read the choice of the user.
6)If the choice of the user is screen.
6.1)Call function input from the screen.
7)If the choice of the user is file.
7.1)Call the function input from a file.
8)Calculate the lowest,highest, mean and median value for the section of students.
8.1)Call the funtion lowest score value and assign that value to a variable.
8.2)Call the funtion highest score value and assign that value to a variable.
8.3)Call the function mean score value and assign that value to a variable.
9)Print the results on an output file.
9.1)Call the function outputfile which prints the results on an output file.
10)Display the results in the screen.
10.1)Call the funtion outputtoscreen which prints the results on the screen.
11)End of the program.


F U N C T I O N   I N P U T   F R O M    T H E   S C R E E N :
1)Ask the user to inser the name and score of the students
2)Read each one of the names and scores of the students


F U N C T I O N   I N P U T   F R O M    A    F I L E :
1)Read all the names and scores of the section.
2)If the input file doesn't exist or is empty close the program.


F U N C T I O N   L O W E S T   V A L U E :
1)Set the first score as a variable lowest value.
2)Compare the lowest value with every element of the scores vector.If the value of the element is less than the
lowest value set that score as the new lowest value.
3)return to the main funtion the lowest value calculated.


F U N C T I O N   L O W E S T   V A L U E :
1)Set the first score as a variable highest value
2)Compare the highest value with every element of the scores vector.If the value of the element is more than the
highest value set that score as the new highest value.
3)return to the main function the highest value calculated.


F U N C T I O N   M E A N   V A L U E :
1)Divide each value of the scores vector by the number of scores for the section, and storage that division on
a variable called mean.
2)For each iteration sum the former value of mean with the new one.
3)Return to the main function the mean value calculated


F U N C T I O N   M E D I A N   V A L U E :
1)Sort the scores vector.
2)Divide the number of scores for the section by 2.
3)If the result of the division is pair
3.1)Take the scores of the students that are in the middle of the scores vector (e.i. 4 students, take scores of
students 2 and 3) and the divide it by two, that will be the median of the section.
4)Else
4.1)Median is the score of the student that is in the middle of the scores vector(e.i 5 students, median is score of
student #3).
5)Return to the main function the median value calculated.


F U N C T I O N   O U T P U T   T O   F I L E
1)Display the lowest, highest, mean and median score for the section and the list of students with their performance
respect those values.


F U N C T I O N   O U T P U T   T O   F I L E
1)Display the lowest, highest, mean and median score for the section and the list of students with their performance
respect those values.

*Name: Patricia Caceres.
*/
/**************************************************************************************************************************/


#include<iostream>
#include <iomanip>
#include<string>
#include<vector>
#include <stdlib.h>	 
#include <fstream>
using namespace std;


//Define 6 functions
double lowestval(vector<double> Sco, int size); //Calculate the lowest score of the section given the scores vector and the size of the array
double highestval(vector<double> Sco, int size); //Calculate the highest score of the section given the scores vector and the size of the array
double meanval(vector<double> Sco, int size); //Calculate the mean score of the section given the scores vector and the size of the array
double medianval(vector<double> Sco, int size); //Calculate the median score of the section given the scores vector and the size of the array
void inputscreen(int size, vector<double>& scores, vector<string>& firstName, vector<string>& lastName); //Read the input of names and scores of the students from the screen
void inputfile(int& userSIZE, vector<double>& scores, vector<string>& firstName, vector<string>& lastName); //Read the input of names and scores of the students from a file
void outputtofile(int size, vector<double> Sco, vector<string> FName, vector<string> LName, double lowest, double highest, double mean, double median); //Write the output of the results on an outputfile
void outputtoscreen(int size, vector<double> Sco, vector<string> FName, vector<string> LName, double lowest, double highest, double mean, double median); //Write the output of the results on the screen 

int main()
{
	int userSIZE; //Define a int variable that will be used to storage the number of scores the user will insert.
	string choice; //Define a string variable that will storage the decision of the user to write the input from the screen or read it from a file.

	cout << string(140, '=');
	cout << endl << endl << setw(95) << "De Anza College: Statistic for a section of students\n";
	cout << "\n\nHi! This program will ask you to insert the number of scores (number of students) the section has.";
	cout << "Then, you will have to decide wether to\nenter the name and scores for the students from the screen, or from an input file you must create BEFORE using this program.";
	cout << "Next, with the\ngiven scores the program will calculate the lowest, highest, mean and median score for the section. ";
	cout << "Finally this program will display the\nlowest, highest, mean and median score for the section and the list of students with their performance respect those values.\n\n";
	cout << string(140, '=');

	int con = 0; //Define a counter that will storage the number of times the do-while loop is repeated
	do
	{
		if (con>0) //If the loop has been repeated more than once display this message
			cout << "\nYou did not insert a correct number of scores, Please try again\n";

		//Ask the user to insert the number of scores.
		cout << "\n\nPlease insert the number of scores. The number of scores should be less (or equal) than 1024 and greater (or equal) than 1:\n\n";

		cin >> userSIZE;
		cout << endl;
		con++;
		cout << string(140, '-') << endl;
	} while (userSIZE > 1024 || userSIZE<1);

	//Define two string vectors (Names of the students) and one integer vector (Scores of the students) of the number of scores selected by the user.
	vector<string> firstName(userSIZE);
	vector<string> lastName(userSIZE);
	vector<double> scores(userSIZE);

	con = 0; //Start over the counter to use it with the next do-while loop.
	do
	{
		if (con >0) //If the loop has been repeated more than once display this message
			cout << "\nYou did not insert a correct choice, Please try again\n";

		//Ask the user if he/she would like to insert the names and scores of students from a file or to the screen
		cout << "\nWould you like to insert the names and scores for the students from a file (Type 'FILE' or 'file') or to screen(Type 'SCREEN' or 'screen')?\n\n";
		cin >> choice;
		cout << endl;
		con++;
		cout << string(140, '-');
	} while ((choice != "FILE") && (choice != "file") && (choice != "SCREEN") && (choice != "screen")); //Repeat the loop if the user did not insert correct values for the variable choice

	if (choice == "FILE" || choice == "file")
		inputfile(userSIZE, scores, firstName, lastName); //Call the function inputfile if the user wants to insert the values from a file.

	else
		inputscreen(userSIZE, scores, firstName, lastName); //Call the funtion inputscreen if the user wants to insert the values to the screen.

	double LOWEST, HIGHEST, MEDIAN, MEAN; //Define as doubles the lowest, highest, median and mean of scores for the section
	LOWEST = lowestval(scores, userSIZE); //Assign to LOWEST the value returned from the lowest score function
	HIGHEST = highestval(scores, userSIZE);//Assign to HIGHEST the value returned from the highest score function
	MEAN = meanval(scores, userSIZE); //Assign to MEAN the value returned from the mean of all the scores function
	MEDIAN = medianval(scores, userSIZE);//Assign to MEDIAN the value returned from the median of all the scores function

	outputtofile(userSIZE, scores, firstName, lastName, LOWEST, HIGHEST, MEAN, MEDIAN); //Call the function outputfile which prints the results on an output file
	outputtoscreen(userSIZE, scores, firstName, lastName, LOWEST, HIGHEST, MEAN, MEDIAN); //Call the funtion outputtoscreen which prints the results on the screen

	cout << endl << endl;
	system("pause");
	return 0;
}

/* Function inputscreen: Reads user input for the names and scores of the students from the screen */
void inputscreen(int size, vector<double>& scores, vector<string>& firstName, vector<string>& lastName) 
{
	system("CLS");
	cout << string(98, '=') << endl << endl;
	cout << setw(69) << "I N P U T   T O   T H E   S C R E E N\n\n";
	cout << string(98, '=');

	for (int cont = 0; cont < size; cont++)
	{
		string FirstName, LastName;
		double Scores;
		//Ask the user to insert the name and score of the students
		cout << "\n\nPlease insert the name and the score of the student #" << (cont + 1) << " Separated by a space, then press <Enter>:\n";
		cout << "The format to insert the values is (first name, last name, score)\n\n";
		//Read the values the user inserted and storage it on different variables (FirstName,LastName,Scores).
		cin >> FirstName >> LastName >> Scores;
		cout << endl;

		if (Scores<0 || Scores>100)
		{
			cout << "You did not insert a correct value for the score of the student. Remember score should be a value from 0 to 100\n";
			cout << "Please insert a score for the student #" << (cont + 1) << " then press <Enter>\n";
			cin >> Scores;
			cout << endl;
		}

		//Assign the value of the variables to the vectors firstName, lastName and scores.
		firstName[cont] = FirstName;
		lastName[cont] = LastName;
		scores[cont] = Scores;

		cout << string(98, '=') << endl;
	}
	system("pause");
	system("CLS"); //Clear the screen before printing out the results on the screen.
}

/*Function inputfile: Reads the names and scores of the students from a file*/
void inputfile(int &userSIZE, vector<double>& scores, vector<string>& firstname, vector<string>& lastname) 
{
	string FirstName, LastName;
	double Scores;

	cout << endl << endl;
	cout << setw(80) << "I N P U T   F R O M   A    F I L E\n\n";
	cout << "I will read the names and scores for the students from an input file.";
	cout << "Remember that in order for this program to work you have to create the \ninput file BEFORE using this program. If the input file does not exist it will not be created and the program will fail.\n\n";
	cout << "Be sure that your input file is written in this format (first name   last name   score)\n\n";
	fstream infile("input.txt", ios::in);

	int cont = 0;
	if (infile)  //If the file is successfully opened,process it.
	{
		//for (int cont = 0; cont < size && !(infile.eof()); cont++)

		while (infile.peek() != EOF && cont<userSIZE)
		{
			infile >> FirstName >> LastName >> Scores;

			if (infile.peek() == EOF)
			{
				userSIZE = cont;
				cout << "Your file has less elements than the number of scores you selected. So I will print just the " << userSIZE << " students that your input file has.\n\n\n";
				break;
			}
			if (FirstName.length() == 0)
			{
				cout << "The file is empty. Write the name of the students and their scores on the input file and then start the program again./n/n";
				system("pause");
				cout << endl << endl;
				exit(0);
			}

			firstname[cont] = FirstName;
			lastname[cont] = LastName;
			scores[cont] = Scores;
			cont++;
		}
	}
	else // Display an error message
	{
		cout << "Error opening the file. Create the input file and then start the program again.\n\n";
		system("pause");
		exit(0);
	}
	infile.close();
	system("pause");
	system("CLS");
}

/* Function lowestval: Calculates the Lowest value of the scores for the section */
double lowestval(vector<double> Sco, int size) 
{
	double lowest;
	lowest = Sco[0];

	for (int x = 0; x < size; x++)
	{
		if (Sco[x] < lowest)
			lowest = Sco[x];
	}
	return lowest;
}

/* Function highestval: Calculates the highest value of the scores for the section */
double highestval(vector<double> Sco, int size) 
{
	double highest;
	highest = Sco[0];

	for (int x = 0; x < size; x++)
	{
		if (Sco[x] > highest)
			highest = Sco[x];
	}
	return highest;
}

/* Function meanval: Calculates the mean value of the scores for the section */
double meanval(vector<double> Sco, int size)
{
	double mean = 0.0;
	for (int x = 0; x < size; x++)
		mean = mean + Sco[x] / size;
	return mean;
}

/* Function medianval: Calculates the median value of the scores for the section */
double medianval(vector<double> Sco, int size)
{
	vector<double> SCO(size);
	double medium, median, hold;
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			if (Sco[y] < Sco[x])
			{
				hold = Sco[x];
				Sco[x] = Sco[y];
				Sco[y] = hold;
			}
		}
	}

	medium = size / 2;

	for (int x = 0; x < size; x++)
		SCO[x] = Sco[x];


	if (size % 2 == 0)
	{
		double x, y;
		hold = medium;
		x = SCO[(hold)];
		y = SCO[(hold - 1)];
		median = x + y;
		median /= 2;
	}
	else
	{
		hold = rint(medium); //Rounds the value of medium to the closer integer.
		median = Sco[hold];
	}

	return median;
}

/* Function outputtofile: Writes the results on an output file */
void outputtofile(int size, vector<double> Sco, vector<string> FName, vector<string> LName, double lowest, double highest, double mean, double median)
{
	fstream outfile("output.txt", ios::out);
	outfile << setprecision(2) << fixed;
	outfile << string(100, '=') << endl << endl;
	outfile << setw(77) << "De Anza College: Statistic for the section of students\n\n\n";
	outfile << " *Number of scores: " << size << "\n *Lowest score of the section: " << lowest;
	outfile << "\n *Highest score of the section: " << highest << "\n *Mean of scores of the section: " << mean;
	outfile << "\n *Median score for the section: " << median << endl << endl << endl;

	outfile << string(100, '=') << endl;
	outfile << "Name of the student" << setw(20) << "Scores" << setw(15) << "Lowest" << setw(15) << "Highest" << setw(12) << "Mean" << setw(15) << "Median";
	outfile << endl;
	outfile << string(100, '=') << endl;

	for (int cont = 0; cont < size; cont++)
	{
		outfile << endl << setw(33) << left << (FName[cont] + " " + LName[cont]) << left << setw(17) << Sco[cont];

		if (Sco[cont] == lowest)
			outfile << left << setw(14) << "Yes";
		else
			outfile << left << setw(14) << "No";

		if (Sco[cont] == highest)
			outfile << left << setw(13) << "Yes";
		else
			outfile << left << setw(13) << "No";

		if (Sco[cont] < mean)
			outfile << left << setw(13) << "Below";
		else
			outfile << left << setw(13) << "Above";

		if (Sco[cont] < median)
			outfile << "Below";
		else
			outfile << "Above";

		outfile << endl << string(100, '-') << endl;
	}
	outfile.close();
}

/* Function outputtoscreen: Writes the results on the screen */
void outputtoscreen(int size, vector<double> Sco, vector<string> FName, vector<string> LName, double lowest, double highest, double mean, double median) 
{
	cout << setprecision(2) << fixed;
	cout << string(100, '=') << endl << endl;
	cout << setw(77) << "De Anza College: Statistic for the section of students\n\n\n";
	cout << " *Number of scores: " << size << "\n *Lowest score of the section: " << lowest;
	cout << "\n *Highest score of the section: " << highest << "\n *Mean of scores of the section: " << mean;
	cout << "\n *Median score for the section: " << median << endl << endl << endl;

	cout << string(100, '=') << endl;
	cout << "Name of the student" << setw(20) << "Scores" << setw(15) << "Lowest" << setw(15) << "Highest" << setw(12) << "Mean" << setw(15) << "Median";
	cout << endl;
	cout << string(100, '=') << endl;



	for (int cont = 0; cont < size; cont++)
	{
		cout << endl << setw(33) << left << (FName[cont] + " " + LName[cont]) << left << setw(17) << Sco[cont];

		if (Sco[cont] == lowest)
			cout << left << setw(14) << "Yes";
		else
			cout << left << setw(14) << "No";

		if (Sco[cont] == highest)
			cout << left << setw(13) << "Yes";
		else
			cout << left << setw(13) << "No";

		if (Sco[cont] < mean)
			cout << left << setw(13) << "Below";
		else
			cout << left << setw(13) << "Above";

		if (Sco[cont] < median)
			cout << "Below";
		else
			cout << "Above";

		cout << endl << string(100, '-') << endl;
	}
}






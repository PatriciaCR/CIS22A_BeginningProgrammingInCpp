/******************************************************************************************/
/*
*CIS 22A, Winter 2015.
*Midterm: This program will generate a random number between 1-100 and will ask the user to
*guess that number,the user will have 8 tries to guess the secret number. If the user is 
*able to guess the number,the program will print a message saying that the user won and was
*able to guess the number correctly in how many tries. If the user's guess is less than the
*secret number, the program will print a message to tell them that they need to guess higher
*and prompt them to enter a new guess. If the user's guess is more than the secret number, 
*the program will print a message letting them know that they need to guess lower and prompt 
*them to enter a new guess. If the user have exhausted 8 guesses, the program will print a 
*message telling them that they lost and also what the secret number was.
*
*Name: Patricia Caceres.
*/
/******************************************************************************************/

#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib> //For rand and srand
#include<ctime> //For the time function
using namespace std;

int main()
{

	const int MinValue = 1,   //Declare as constant integer the maximum and minimum value of the secret number 
		MaxValue = 100;

	//Variables
	int secretnumber, numtry = 1, guess; //Defining the variables secretnumber, numtry(number of tries) and guess(user guess) as Integers
	unsigned seed = time(0); //Get the system time
	bool bFound = false; //Flag set as False

	//Seed the random number generator
	srand(seed);
	secretnumber = (rand() % (MaxValue - MinValue + 1)) + MinValue;

	
	cout << string(85, '-') << endl<<endl;

	//Instructions for the game
	cout << "\t\t\tHello! this is a number guessing game\n\n";
	cout << " I will think about a number between 1-100 and you will guess. You just have 8 TRIES.\n\n\n Ready?\n\n";
	cout << " First try!!! Good Luck! :)\n\n";
	cout << string(85, '-') << endl;
	cout << "1) Please enter your guessing\n\n"; //Asks the user for the 1st guess
	cin >> guess; //Read the user guess

	
	/*THIS PART OF THE PROGRAM WILL BE REPEATED 7 TIMES MORE OR AT LEAST UNTIL THE USER GUESS THE NUMBER.*/

	//Compare the secret number with the guess of the user, depending if the comparation is true or false the value of the flag will change
	bFound = secretnumber == guess;

	// If the guess of the user is different from the secret number AND the number of tries is LESS than 8 the program will execute this part of the program
	if (bFound == false && numtry <= 8) 
	{
		if (guess > secretnumber) //If the guess of the user is more than the secret number then the program will say to the user to guess lower.
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1; //Number of tries +1
			cout << string(85, '-') << endl;
			cout << "2) Please insert another number\n\n"; //Asks the user to guess again
			cin >> guess; //Read the user guess
		}
		else //If the guess of the user was less than the secret number then the program will say to the user to guess higher
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "2) Please insert another number\n\n"; //Asks the user to guess again
			cin >> guess;//Read the user guess again
		}
	} //End of the part that will be repeated. 
	

	bFound = secretnumber == guess;

	if (bFound == false && numtry <= 8)
	{
		if (guess > secretnumber)
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "3) Please insert another number\n\n";
			cin >> guess;
		}
		else
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "3) Please insert another number\n\n";
			cin >> guess;
		}
	}
	
	bFound = secretnumber == guess;

	if (bFound == false && numtry <= 8)
	{
		if (guess > secretnumber)
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "4) Please insert another number\n\n";
			cin >> guess;
		}
		else
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "4) Please insert another number\n\n";
			cin >> guess;
		}
	}
	
	bFound = secretnumber == guess;

	if (bFound == false && numtry <= 8)
	{
		if (guess > secretnumber)
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "5) Please insert another number\n\n";
			cin >> guess;
		}
		else
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "5) Please insert another number\n\n";
			cin >> guess;
		}
	}
	
	bFound = secretnumber == guess;

	if (bFound == false && numtry <= 8)
	{
		if (guess > secretnumber)
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "6) Please insert another number\n\n";
			cin >> guess;
		}
		else
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "6) Please insert another number\n\n";
			cin >> guess;
		}
	}
	
	bFound = secretnumber == guess;

	if (bFound == false && numtry <= 8)
	{
		if (guess > secretnumber)
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "7) Please insert another number\n\n";
			cin >> guess;
		}
		else
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "7) Please insert another number\n\n";
			cin >> guess;
		}
	}
	
	bFound = secretnumber == guess;

	if (bFound == false && numtry <= 8)
	{
		if (guess > secretnumber)
		{
			cout << "\nThe number you inserted is more than the secret number, you have to guess lower\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "8) Please insert another number\n\n";
			cin >> guess;
		}
		else
		{
			cout << "\nThe number you inserted is less than the secret number, you have to guess higher\n\n";
			numtry += 1;
			cout << string(85, '-') << endl;
			cout << "8) Please insert another number\n\n";
			cin >> guess;
		}
	}
	
	//Compare for the last time if the guess of the user is equal to the secret number.
	bFound = secretnumber == guess;

	if (bFound == false) //If the user was not able to guess the 8th time the program will execute this part.
	{
		cout << "\n\t\t\t\tG A M E   O V E R!\n\n";
		cout << "\n\t You have exhausted the number of guesses. You have lost the game :(\n\n";
		cout << "\t\t\t"<<setw(27)<<"The secret number was: "<< secretnumber;
		cout << "\n\n\n Thank you for playing the Secret Number Guessing Game designed by Patricia Caceres";
	}

	if (bFound == true) //If the user guessed the secret number the program will execute this part. 
	{
		cout << "\n\t\t\t\t    Y O U   W I N!\n\n";
		cout << "\n\tYou have guessed the number!!! You have won the game in " << numtry << " try(tries)\n";
		cout << "\n\n Thank you for playing the Secret Number Guessing Game designed by Patricia Caceres";
	}

	//END OF THE PROGRAM.
	cout <<endl <<string(85, '-') << endl;
	cout << endl << endl;
	system("pause");
	return(0);
}
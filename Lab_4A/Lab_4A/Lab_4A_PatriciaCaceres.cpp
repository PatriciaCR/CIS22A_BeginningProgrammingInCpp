#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{

	double time, distance; //Define variables time and distance as doubles
	string Medium; //Define Medium as string
	const int Speeda = 1100, Speedw = 4900, Speeds = 16400; //Define as const integer Speed of the wave in air,water and steel.

	/*P S E U D O C O D E*/
	cout << string(97, '-');
	cout << "\n\n Program made by : Patricia Caceres"<<setw(64)<<"CIS 22A,Winter 2015.\n\n";
	cout << string(97, '-')<<endl<<endl;
	cout << setw(46) << "Pseudocode" << endl<<endl;
	cout << "1)Begin the program.\n";
	cout << "2)Define the variables time and distance as doubles, Medium as a string, and Speed\n";
	cout << "  of air, water and steel as constant integers.\n";
	cout << "3)Ask the user to select a medium (AIR,WATER or STEEL). It needs to be written in uppercase\n";
	cout << "4)Read the user input and store it in the variable Medium\n";
	cout << "5)If the varible Medium is equal to AIR,WATER and STEEL\n";
	cout << "   6)Ask the user to enter the distance that the sound wave will travel in the selected medium.\n";
	cout << "   7)Read distance\n";
	cout << "\t8)If the distance inserted by the user is more than 0\n";
	cout << "\t  9)If Medium is equal to AIR\n";
	cout << "\t    Calculate distance/Speed of the wave in AIR and store it in the variable time\n";
	cout << "\t  10)If Medium is equal to WATER\n";
	cout << "\t    Calculate distance/Speed of the wave in WATER and store it in the variable time\n";
	cout << "\t  11)If Medium is equal to STEEL\n";
	cout << "\t    Calculate distance/Speed of the wave in STEEL and store it in the variable time\n";
	cout << "\t  Else display You did not insert a valid distance\n";
	cout << "  Else display You did not insert a valid medium\n";
	cout << "12)Display the time calculated.\n\n";
	cout << string(97, '-') << endl << endl;
	
	
	cout << " Please select air,water or steel (Write it in uppercase, i.e. AIR) then press <ENTER>\n\n"; 
	cin >> Medium;

	if (Medium == "AIR"|| Medium == "WATER"|| Medium == "STEEL")
	{
		cout << "\n Enter the distance the wave will travel in the medium selected (in feets)\n\n";
		cin >> distance;
		if (distance > 0)
		{
			if (Medium == "AIR")
			{
				time = distance / Speeda;
				cout << "\n The amount of time the wave will take to travel in the " << Medium << " a distance of " << distance << " feet(s) is " << setprecision(4) << fixed << time << " s";
			}
			else if (Medium == "WATER")
			{
				time = distance / Speedw;
				cout << "\n The amount of time the wave will take to travel in the " << Medium << " a distance of " << distance << " feet(s) is " << setprecision(4) << fixed << time << " s";
			}
			else
			{
				time = distance / Speeds;
				cout << "\n The amount of time the wave will take to travel in the " << Medium << " a distance of " << distance << " feet(s) is " << setprecision(4) << fixed << time << " s";
			}
		}
		else
			cout << "\n You did not insert a valid distance";
	}
	else
		cout << "\n You did not insert a valid medium";
	cout <<endl<<endl<< string(97, '-') << endl << endl;
	//End of the program.
	cout << endl << endl;
	system("pause");
}
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int size = 0, lowest = 0, highest = 0, mean = 0, median = 0;
	cout << string(60, '=');
	cout << "\nDe Anza College: Statistic for the section of students\n\n";
	cout << " *Number of scores: " << size << "\n *Lowest score of the section: " << lowest;
	cout << "\n *Highest score of the section: " << highest << "\n *Mean of scores of the section: " << mean;
	cout << "\n *Median score for the section: " << median << endl;
	cout << string(60, '=')<<endl<<endl;
	
	

	cout << "Name of the student"<<setw(60)<<"Lowest"<<setw(3)<<"Highest"<<setw(4)<<"Mean"<<setw(2)<<"Median";
	cout << endl;
	cout << string(60, '=');

	system("pause");
	return 0;

}
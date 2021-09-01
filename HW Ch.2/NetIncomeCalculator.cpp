// HW Ch.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float payRate;
float hours[] = { 0,0,0,0,0,0,0 };
string days[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
float totalHours=0;
float totalEarned;


int main()
{
	cout << "Weekly Net Income Calculator\n" << endl;
	cout << "Hourly Rate: ";
	cin >> payRate ;
	cout<< endl;
	GetHours : for (int i = 0; i < 7; i++)
	{
		cout << "Hours Worked " << days[i] << ":";
		cin >> hours[i];
		if (hours[i] > 24) {
			cout << "ERROR: Hours worked" << days[i] << " Exceeds 24 hours! Please re-input hours!\n" << endl;
			goto GetHours;
		}
		totalHours += hours[i];
	}
	totalEarned = totalHours * payRate;
	cout << "\nTotal Hours Worked: " << totalHours <<endl;
	cout << "Weekly Salary: $" << totalEarned << endl;

	return 0; 
}



// HW Ch.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float payRate;
const int hourDim = 7;
float hours[hourDim];
const string days[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
float totalHours=0;
float totalEarned;
float totalExpense;



int main()
{
	cout << " Weekly Net Income Calculator\n" << endl;
	cout << " Hourly Rate: ";
	cin >> payRate ;
	cout<< endl;
	GetHours : for (int i = 0; i <hourDim; i++)
	{
		cout << " Hours Worked " << days[i] << ":";
		cin >> hours[i];
		if (hours[i] > 24) {
			cout << " ERROR: Hours worked" << days[i] << " Exceeds 24 hours! Please re-input hours!\n" << endl;
			goto GetHours;
		}
		totalHours += hours[i];
	}
	totalEarned = totalHours * payRate;
	cout << "\n Total Hours Worked: " << totalHours <<endl;
	cout << " Weekly Salary: $" << totalEarned << endl;
	totalEarned *= 4;
	cout << " Est. Monthly Salary: $" << totalEarned << endl;

	int expenseNumb=1;
	cout << "\n How many Expenses would you like to report? ";
	cin >> expenseNumb;
	float* expense = new float [expenseNumb];

	for (int i = 0; i < expenseNumb; i++) {
		cout << "\n Expense " << i + 1 << " Name: ";
		string expName;
			cin >> expName; 
		cout << " Amount: $";
			cin >> expense[i];
		totalExpense += expense[i];
	}
	cout << "\n Total Expenses: $" << totalExpense<<endl;
	
	totalEarned -= totalExpense;
	cout << "\n Monthly Net Income: $" << totalEarned  << endl;

	return 0; 
}



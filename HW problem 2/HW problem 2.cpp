// HW problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int numb;
int d1;
int d2;
int d3;
int d4;
int d5;


int main()
{
	MARKER:cout << "Insert a 5-digit Int: ";
	cin >> numb;
	if (numb < 10000 || numb>=100000) {
		cout << "ERROR: Number must be 5 Digits!" << endl;
		goto MARKER;
	}
	d1 = numb / 10000;
	cout << "\n Digit 1: " << d1;
	d2 = numb / 1000-d1*10;
	cout << "\n Digit 2: " << d2;
	d3 = numb / 100 - (d1*100)-(d2*10);
	cout << "\n Digit 3: " << d3;
	d4 = numb / 10 - (d1 * 1000) - (d2 * 100) - (d3*10);
	cout << "\n Digit 4: " << d4;
	d5 = numb - (d1 * 10000) - (d2 * 1000) - (d3 * 100) - (d4 * 10);
	cout << "\n Digit 5: " << d5;
	return 0;
}


// HW Ch.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float total;
float tax;

int main()
{
	cout << " Welcome to Pass n' Gas Convenience Store!\n" << endl;
	

int itemQty;
cout << "\n How many items would you like to purchase?";
cin >> itemQty;
float* items = new float[itemQty];

for (int i = 0; i < itemQty; i++) {
	cout << "\n Item " << i + 1 << " Name: ";
	string expName;
	cin >> expName;
	cout << " Amount: $";
	cin >> items[i];
	int qty;
MARKER: cout << " Quantity:";
	cin >> qty;
	if (qty < 1) {
		cout << "\nERROR: Quantity must be at least 1!"<< endl;
		goto MARKER;
	}
	items[i] *= qty;
	total += items[i];
}
tax = total * 0.06;

cout << " Sub-Total: $" << total << endl;
cout << " Tax: $" << tax << endl;
total += tax;
cout << " \n Total: $" << total << endl;

float amntLeft;
cout << " \n Cash Due: " << endl;
amntLeft = total % 100;
cout << "  $100s: " << (total - amntLeft) / 100 << endl;
total = amntLeft;

return 0;
}



// HW Ch.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char ch;
int x, y;
float z;


int main()
{
	cin >> ch;
	cin >> x;
	cout << "ch:" << ch << endl;
	cout << "x:" << x << endl;
	cout <<"x+ch=" << x + ch << endl;
	ch = ch + x;
	cout << "ch= Ch+ x" << endl;
	cout << "Ch= "<< ch << endl;

	z = static_cast<float>(ch)/10;
	cout << "Z= " << z << endl;
	return 0;
}
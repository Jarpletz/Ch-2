

#include <iostream>
using namespace std;

float numbs[5];
float total;

int main()
{
	cout << "\n Input 5 floats:\n" << endl;

	for (int i = 0; i < 5;i++) {
		cout << " Float " << i + 1 << " :";
		cin >> numbs[i];
		total += numbs[i];
	}
	cout << "\n Sum of Numbers as Float: " << total << endl; 
	cout << " Sum of Numbers as Int: " << static_cast<int>(total)<< endl;



return 0;
}

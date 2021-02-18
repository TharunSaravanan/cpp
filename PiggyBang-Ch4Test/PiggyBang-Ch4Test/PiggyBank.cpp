//Made by Tharun Saravanan on 2/17/21
//Calculates and displays amount of money in a piggybank

#include<iostream>
#include <iomanip>
using namespace std;

int main() {

	double halfDollars = 0;
	double quarters = 0;
	double dimes = 0;
	double nickels = 0;
	double pennies = 0;
	double total = 0;

	cout << "Enther amount of half-dollar coins: ";
	cin >> halfDollars;
	cout << "Enter amount of quarters: ";
	cin >> quarters;
	cout << "Enter amount of dimes: ";
	cin >> dimes;
	cout << "Enter amount of nickels: ";
	cin >> nickels;
	cout << "Enter amount of pennies: ";
	cin >> pennies;

	total = (halfDollars * 50) + (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1);

	cout << setprecision(5) << "The total amount of money in the piggy bank is: $" << total / 100 << endl;

	system("pause");
	return 0;
}
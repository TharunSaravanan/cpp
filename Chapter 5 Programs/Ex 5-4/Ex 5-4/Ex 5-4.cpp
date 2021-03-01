//Made by Tharun Saravanan on 2/23/21
#include<iostream>
using namespace std;

int main()
{
	double units = 0;
	double total = 0;

	cout << "Enther the amount of Units: ";
	cin >> units;

	if (units <= 0)
	{
		cout << "Entry error" << endl;
	}
	else
	{
		total = units * 5;

		cout << "The total amount owed is: " << total << endl;
	}

	system("pause");
	return 0;
}
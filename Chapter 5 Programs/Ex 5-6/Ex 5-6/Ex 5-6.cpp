//Made by Tharun Saravanan on 2/23/21
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double salary = 0;
	double raise = 0;
	char department = ' ';

	cout << "Enter your salary: ";
	cin >> salary;
	cout << "Enter your department (a, b, or c): ";
	cin >> department;

	if (toupper(department) == 'A')
	{
		cout << "Your raise will be: $" << salary * 0.02 << endl;
	}
	else if(toupper(department) == 'B')
	{
		cout << "Your raise will be: $" << salary * 0.02 << endl;
	}
	else if (toupper(department) == 'C')
	{
		cout << "Your raise will be: $" << salary * 0.015 << endl;
	}

	system("pause");
	return 0;
}
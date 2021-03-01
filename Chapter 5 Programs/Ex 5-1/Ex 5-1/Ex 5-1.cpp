//Made by Tharun Saravanan on 2/23/21
#include<iostream>
using namespace std;

int main()
{
	int code1 = 0;
	int code2 = 0;

	cout << "Enter the first number: ";
	cin >> code1;
	cout << "Enter the second number: ";
	cin >> code2;

	if (code1 == code2)
	{
		cout << "Equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}

	system("pause");
	return 0;
}
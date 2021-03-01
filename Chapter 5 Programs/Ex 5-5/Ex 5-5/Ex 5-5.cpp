//Made by Tharun Saravanan on 2/23/21
#include<iostream>
using namespace std;

int main()
{
	double marySales = 0;
	double jimSales = 0;

	cout << "Enter Mary sales: ";
	cin >> marySales;
	cout << "Enter jim sales: ";
	cin >> jimSales;

	if (marySales > jimSales)
	{
		cout << "Mary sales are higher than jim sales" << endl;
	}
	else
	{
		cout << "jim sales are higher than mary sales" << endl;
	}

	system("pause");
	return 0;
}
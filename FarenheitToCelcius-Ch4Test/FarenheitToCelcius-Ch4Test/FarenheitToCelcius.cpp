//Made by Tharun Saravanan on 2/17/2021
//Converts farenheit to celcius

#include<iostream>
#include <iomanip>
using namespace std;

int main() {

	double farenheit = 0;
	double celcius = 0;

	cout << "Enter temperature in farenheit: ";
	cin >> farenheit;


	celcius = 5.0 / 9.0 * (farenheit - 32.0);

	cout << setprecision(3) << "The temperature in degrees celcius is: " << celcius << endl;

	system("pause");
	return 0;
}

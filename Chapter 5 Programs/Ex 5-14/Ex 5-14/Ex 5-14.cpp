//Made by Tharun Saravanan on 2/27/21
#include<iostream>
using namespace std;

int main()
{
	double poundWeight= 0;
	double kilograms = 0;
	double feetHeight = 0;
	double inchHeight = 0;
	double centimeterHeight = 0;
	double age = 0;
	char gender = ' ';
	double BMR = 0;

	cout << "Enter weight in pounds: ";
	cin >> poundWeight;
	cout << "Enter height in feet: ";
	cin >> feetHeight;
	cout << "Enter age in years: ";
	cin >> age;
	cout << "Enter your gender (m or f): ";
	cin >> gender;

	//Getting height, and weight in kilograms and centimeters
	poundWeight = poundWeight / 2;
	kilograms = poundWeight - (poundWeight * 0.1);
	inchHeight = feetHeight * 12;
	centimeterHeight = inchHeight * 2.54;

	//if statements to differentiate between male and female
	if (toupper(gender) == 'M')
	{
		BMR = (10 * kilograms) + (6.25 * centimeterHeight) - (5 * age) + 5;
	}
	else
	{
		BMR = (10 * kilograms) + (6.25 * centimeterHeight) - (5 * age) - 161;
	}
	cout << "Your BMR is: " << BMR << endl;

	system("pause");
	return 0;
}
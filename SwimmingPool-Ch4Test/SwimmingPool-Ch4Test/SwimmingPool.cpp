//Made by Tharun Saravanan on 2/17/21
//Calculates the volume of a pool with its dimentions

#include<iostream>
using namespace std;

int main() {

	double length = 0;
	double width = 0;
	double height = 0;
	double volume = 0;

	cout << "Enther pool length: ";
	cin >> length;
	cout << "Enter pool width: ";
	cin >> width;
	cout << "Enter pool height: ";
	cin >> height;
	
	volume = length * width * height;

	cout << "The volume of the pool is: " << volume << " cubic feet" << endl;

	system("pause");
	return 0;
}
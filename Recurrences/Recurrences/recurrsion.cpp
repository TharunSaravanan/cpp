#include<iostream> 
using namespace std;

int main() {

	double a = 0;
	double b = 0;
	double f0 = 0;
	double f1 = 0;
	double n = 0;

	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter f0: ";
	cin >> f0;
	cout << "enter f1: ";
	cin >> f1;
	cout << "enter n: ";
	cin >> n;

	double fminus1 = f1;
	double fminus2 = f0;
	double fn = 0;

	for (int i = 2; i <= n; i++)
	{
		fn = a * (fminus2) + b * (fminus1);

		fminus2 = fminus1;
		fminus1 = fn;

	}

	cout << "f(n) is = to: " << fn << endl;

	system("pause");
	return 0;
}
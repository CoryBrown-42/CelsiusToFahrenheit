#include <iostream>

using namespace std;


void CelsiusToFahrenheit()
{
	
	int celsius = 0;

	cout << "Enter the temperature in Celsius:" << endl;
	cin >> celsius;
	

	int factor;
	factor = 212 - 32;

	int fahrenheit;
	fahrenheit = factor * celsius / 100 + 32;

	cout << "Fahrenheit value is: ";
	cout << fahrenheit << endl;
}


int main()
{
	CelsiusToFahrenheit();

	system("pause");
	return 0;
}
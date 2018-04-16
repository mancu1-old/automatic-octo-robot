#include <iostream>
using std::cout;
using std::cin;
int yearsToMonths(int);

int main()
{
	cout << "Enter your age: __\b\b";
	int years;
	cin >> years;
	cout << "Your age in months is " << yearsToMonths(years) << ".";
	cin.get();
	cin.get();
	return 0;
}

int yearsToMonths(int y)
{
	return 12 * y;
}
#include <iostream>
using std::cout;
using std::cin;
int celToFar(int);

int main()
{
	cout << "Please enter a Celsius value: __\b\b";
	int cel;
	cin >> cel;
	cout << cel << " degress Celsius is " << celToFar(cel) << " degrees Fahrenheit.";
	cin.get();
	cin.get();
	return 0;
}

int celToFar(int c)
{
	return 1.8 * c + 32;
}
#include <iostream>
using std::cout;
using std::cin;
double lyToAu(double); // light years to astronomical units

int main()
{
	cout << "Enter the number of light years: ";
	double ly; // light years
	cin >> ly;
	cout << ly << " light years = " << lyToAu(ly) << " astronomical units.";
	cin.get();
	cin.get();
	return 0;
}

double lyToAu(double ly)
{
	return 63240 * ly;
}
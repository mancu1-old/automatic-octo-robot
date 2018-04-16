#include <iostream>
using std::cout;
using std::cin;
void farlongToYard(int);

int main()
{
	cout << "Enter farlongs distance: ____\b\b\b\b";
	int farlong;
	cin >> farlong;
	farlongToYard(farlong);
	cin.get();
	cin.get();
	return 0;
}

void farlongToYard(int f)
{
	int yard;
	yard = 220 * f;
	cout << f << " farlong distance equals to " << yard << " yards.";
}
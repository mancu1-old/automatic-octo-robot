#include <iostream>
using std::cout;
using std::cin;
void fullTime(int, int);

int main()
{
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	fullTime(hours, minutes);
	cin.get();
	cin.get();
	return 0;
}

void fullTime(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute;
}

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void printMice();
void printAction();

int main()
{
	printMice();
	printMice();
	printAction();
	printAction();
	cin.get();
	return 0;
}

void printMice()
{
	cout << "Three blind mice" << endl;
}

void printAction()
{
	cout << "See how they run" << endl;
}
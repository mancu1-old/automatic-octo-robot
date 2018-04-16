#include <iostream>

int main() {

  float litersPerKilometers;

  std::cout << "Enter the amount of liters per kilometers: ";
  std::cin >> litersPerKilometers;

  float usaStyle = 62.14 / ( litersPerKilometers / 3.875 );

  std::cout << "Your engine uses " << usaStyle << " gallones per mile.";

  std::cin.get();
  std::cin.get();

  return 0;
}
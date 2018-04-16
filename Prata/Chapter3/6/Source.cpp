#include <iostream>

int main() {

  float kilometer;
  float liter;

  std::cout << "Enter the amount of driven kilometers: ";
  std::cin >> kilometer;

  std::cout << "Enter the amount of used fuel in liters: ";
  std::cin >> liter;

  float litersPerKilometers = liter / kilometer * 100;

  std::cout << "Your engine uses " << litersPerKilometers << " liters per 100 kilometers.";

  std::cin.get();
  std::cin.get();

  return 0;
}
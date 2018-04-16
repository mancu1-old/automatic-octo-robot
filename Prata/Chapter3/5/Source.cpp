#include <iostream>

int main() {
  
  unsigned long long population;
  unsigned long long coutryPopulation;

  std::cout << "Enter the world's population: ";
  std::cin >> population;

  std::cout << "Enter the population of any country: ";
  std::cin >> coutryPopulation;

  float percentage = float(coutryPopulation) / float(population) * 100;

  std::cout << "The population of this country is " << percentage << "% of the world population.";

  std::cin.get();
  std::cin.get();

  return 0;
}
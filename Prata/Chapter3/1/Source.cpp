#include <iostream>

int main() {
  
  const int TransformRatio = 12;
  
  std::cout << "Enter your height in inches:__\b\b";
  int inchHeight;
  std::cin >> inchHeight;

  int footHeight = inchHeight / TransformRatio;
  int leftInches = inchHeight % TransformRatio;

  std::cout << "Your height in foots equals to " << footHeight
    << " and there remains " << leftInches << " inch(es).";

  std::cin.get();
  std::cin.get();

  return 0;
}
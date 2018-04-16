#include <iostream>

int main() {

  const int FootToInchRatio = 12;
  const float InchToMeterRatio = 0.0254;
  const float PoundToKgRatio = 2.2;
  
  int footHeight;
  int inchHeight;
  int poundWeight;

  std::cout << "Enter your height in foots: _\b";
  std::cin >> footHeight;

  std::cout << "Enter remain inches: __\b\b";
  std::cin >> inchHeight;

  std::cout << "Enter your weight in pounds: ___\b\b\b";
  std::cin >> poundWeight;

  float meterHeight = ( footHeight * FootToInchRatio + inchHeight ) * InchToMeterRatio;
  float kgWeight = poundWeight / PoundToKgRatio;
  float bodyIndexMass = kgWeight / ( meterHeight * meterHeight );

  std::cout << "Your BMI is: " << bodyIndexMass; 

  std::cin.get();
  std::cin.get();

  return 0;
}
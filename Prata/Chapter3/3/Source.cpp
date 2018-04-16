#include <iostream>

int main() {

  const int ArcsecToDegree = 3600;
  const int ArcminToDegree = 60;
  
  int degree;
  int arcmin;
  int arcsec;
  
  std::cout << "Enter a latitude in degrees, minutes and seconds:\n";

  std::cout << "First, enter the degrees: ___\b\b\b";
  std::cin >> degree;

  std::cout << "Next, enter the minutes of arc: __\b\b";
  std::cin >> arcmin;

  std::cout << "Finally, enter the seconds of arc: __\b\b";
  std::cin >> arcsec;

  float decimalDegree = degree + ( float(arcmin) / ArcminToDegree ) + ( float(arcsec) / ArcsecToDegree );
  std::cout << degree << " degrees, " 
    << arcmin << " minutes, " 
    << arcsec << " seconds = " 
    << decimalDegree << " degrees.";

  std::cin.get();
  std::cin.get();

  return 0;
}
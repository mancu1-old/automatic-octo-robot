#include <iostream>

int main() {

  const int SecondsToDays = 24 * 60 * 60;
  const int SecondsToHours = 60 * 60;
  const int SecondsToMinutes = 60;

  unsigned long long seconds;

  std::cout << "Enter the number of seconds: ";
  std::cin >> seconds;

  int numberOfDays = seconds / SecondsToDays; // 130000 / ( 24 * 60 * 60 ) = 1.5
  int secondsLeftAfterSecondsToDayOperaion = seconds % SecondsToDays; // 130000 % ( 24 * 60 * 60 ) = 43600

  int numberOfHours = secondsLeftAfterSecondsToDayOperaion / SecondsToHours; // 43600 / ( 60 * 60 ) = 12.1
  int secondsLeftAfterSecondsToHourOperation = seconds % SecondsToHours; // 130000 % ( 60 * 60 ) = 400
  
  int numberOfMinutes = secondsLeftAfterSecondsToHourOperation / SecondsToMinutes; // 400 / 60 = 6.67
  int secondsLeftAfterSecondsToMinutesOperation = seconds % SecondsToMinutes; // 130000 % 60 = 40
  
  int numberOfSeconds = secondsLeftAfterSecondsToMinutesOperation;

  std::cout << seconds << " seconds = "
    << numberOfDays << " days, "
    << numberOfHours << " hours, "
    << numberOfMinutes << " minutes, "
    << numberOfSeconds << " seconds.";

  std::cin.get();
  std::cin.get();

  return 0;
}
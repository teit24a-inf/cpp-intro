#include <iostream>

#include "conversions.h"

int main() {
  std::cout << "Sekunden: " << seconds() << std::endl;
  std::cout << "Minuten:  " << minutes() << std::endl;
  std::cout << "Stunden:  " << hours() << std::endl;

  std::cout << "Uhrzeit:  " << time_string() << std::endl;

  return 0;
}

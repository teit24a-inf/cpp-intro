#include "read_name.h"

#include <iostream>

std::string read_name() {
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  return name;
}

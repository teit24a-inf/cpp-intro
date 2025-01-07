#include <string>

#include "greet.h"
#include "read_name.h"

int main() {
  std::string name = read_name();
  greet(name);
}

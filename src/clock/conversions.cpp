#include "conversions.h"

#include <ctime>

unsigned int seconds() {
  time_t now = time(0);
  return now % 60;
}

unsigned int minutes() {
  time_t now = time(0);
  return (now / 60) % 60;
}

unsigned int hours() {
  time_t now = time(0);
  return (now / (60 * 60)) % 24;
}

std::string time_string() {
  return std::to_string(hours()) + ":" + std::to_string(minutes()) + ":" +
         std::to_string(seconds());
}

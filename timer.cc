#include "timer.h"

Timer::Timer() {}

void Timer::start() { this->timer = clock(); }

void Timer::stop() { this->timer = clock() - this->timer; }

void Timer::print() { std::cout << this->format() << std::endl; }

std::string Timer::format() {
  std::string formatted;
  int h, min, sec = 0;

  float final = (float)this->timer / CLOCKS_PER_SEC;

  min = fmod(final, 60);

  return formatted;
}

#include <cstdlib>

#include "timer.h"

int main() {
  Timer* timer;

  timer = new Timer();
  timer->start();

  for (long i = 0; i < 10000000000; ++i) continue;

  timer->stop();

  timer->print();

  delete timer;

  return EXIT_SUCCESS;
}

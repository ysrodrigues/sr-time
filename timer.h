#ifndef TIMER_H
#define TIMER_H

#include <cmath>
#include <ctime>
#include <iostream>
#include <string>

class Timer {
 public:
  Timer();

  void start();

  void stop();

  void print();

 protected:
  std::string format();

 private:
  clock_t timer;
};

#endif  // TIMER_H

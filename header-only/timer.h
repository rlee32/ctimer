#ifndef TIMER_H_
#define TIMER_H_

#include <sys/time.h>

typedef struct Timer
{
  struct timeval start, end;
} Timer;

void start()
{
  gettimeofday(&start, NULL);
}
double stop()
{
  gettimeofday(&end, NULL);
  delta = ((end.tv_sec  - start.tv_sec) * 1000000u +
    end.tv_usec - start.tv_usec) / 1.e6;
  return delta;
}

#endif

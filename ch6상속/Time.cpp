#include "Time.h"

Time::Time(int h, int m, int s) { hour = h; min = m; sec = s; }

void Time::OutTime() { printf("%d:%d:%d", hour, min, sec); }

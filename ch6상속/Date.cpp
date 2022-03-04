#include "Date.h"

Date::Date(int y, int m, int d) { year = y; month = m; day = d; }

void Date::OutDate() { printf("%d/%d/%d", year, month, day); }

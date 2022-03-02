#pragma once
#include "Time2.h"
#include "Date.h"
#include <stdio.h>


Time2::Time2(int h, int m, int s) { hour = h; min = m; sec = s; }

void OutToday(Date& d, Time2& t)
{
	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
		d.year, d.month, d.day, t.hour, t.min, t.sec);
}

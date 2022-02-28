
#include <stdio.h>
#include "timeTest.h"


// 생성자1

Time::Time(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}




// 생성자 2

Time::Time(int abssec) {
	hour = abssec / 3600;
	min = (abssec / 60) % 60;
	sec = abssec % 60;
}

void Time::OutTime() {
	printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
}



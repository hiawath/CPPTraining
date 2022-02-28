
#include <stdio.h>
#include "timeTest.h"


// ������1

Time::Time(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}




// ������ 2

Time::Time(int abssec) {
	hour = abssec / 3600;
	min = (abssec / 60) % 60;
	sec = abssec % 60;
}

void Time::OutTime() {
	printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
}



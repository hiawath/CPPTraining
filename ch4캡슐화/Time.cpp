#include "Time.h"

Time::Time(int h, int m, int s) {
	SetHour(h);
	SetMinute(m);
	sec = s;
}

int Time::GetHour() { return hour; }

void Time::SetHour(int h) {
	if (h >= 0 && h < 24) {
		hour = h;
	}
}

int Time::GetMinute() { return min; }

void Time::SetMinute(int m) {
	if (m >= 0 && m < 60) {
		min = m;
	}
}

int Time::GetSecond() { return sec; }

void Time::OutTime() {
	printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
}

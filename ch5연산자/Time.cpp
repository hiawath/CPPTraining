#include "Time.h"
#include <iostream>


Time::Time() : hour(0), min(0), sec(0) {}

Time::Time(int h, int m, int s) { hour = h; min = m; sec = s; }

void Time::OutTime() {
	printf("%d:%d:%d\n", hour, min, sec);
}

const Time Time::AddTime(const Time& other) const {
	Time t;
	t.sec = this->sec + other.sec;
	t.min = this->min + other.min;
	t.hour = this->hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;
	return t;
}

const Time Time::operator +(const Time& other) const {
	Time t;
	t.sec = sec + other.sec;
	t.min = min + other.min;
	t.hour = hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;
	return t;
}
const Time Time::operator +(int s) const {
	Time t = *this;

	t.sec += s;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;
	return t;
}

Time Time::operator ++() {
	sec++;
	min += sec / 60;
	sec %= 60;
	hour += min / 60;
	min %= 60;
	return *this;
}
const Time Time::operator ++(int dummy) {
	Time t = *this;
	++* this;
	return t;
}
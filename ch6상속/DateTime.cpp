#include "DateTime.h"

DateTime::DateTime(int y, int m, int d, int h, int min, int s, int ms, bool b)
	: Date(y, m, d), Time(h, min, s) {
	milisec = ms;
	bEngMessage = b;
}

void DateTime::OutNow() {
	printf(bEngMessage ? "Now is " : "������ ");
	OutDate();
	_putch(' ');
	OutTime();
	printf(".%d", milisec);
	puts(bEngMessage ? "." : " �Դϴ�.");
}

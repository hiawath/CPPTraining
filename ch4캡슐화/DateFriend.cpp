#include "DateFriend.h"

DateFriend::DateFriend(int y, int m, int d) { year = y; month = m; day = d; }

void DateFriend::OutToday(TimeFriend& t) {
	printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",
		year, month, day, t.hour, t.min, t.sec);
}

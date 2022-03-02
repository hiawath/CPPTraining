#pragma once
#include <stdio.h>
#include "TimeFriend.h"
class DateFriend
{
private:
	int year, month, day;
public:
	DateFriend(int y, int m, int d);
	void OutToday(TimeFriend& t);
};

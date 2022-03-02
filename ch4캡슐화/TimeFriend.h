#pragma once
class TimeFriend
{
	friend class DateFriend;
private:
	int hour, min, sec;
public:
	TimeFriend(int h, int m, int s);
};


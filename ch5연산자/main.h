#pragma once
#include "Time.h"
const Time operator +(int s, const Time& me) {
	return (me + s);
}
ostream& operator <<(ostream& c, const Time& T)
{
	c << T.hour << "��" << T.min << "��" << T.sec << "��";
	return c;
}

ostream& operator <<(ostream& c, const Time* pT)
{
	c << *pT;
	return c;
}


#pragma once
#include "B.h"
#include "C.h"


class D : public B, public C
{
protected:
	int d;
public:
	D(int aa, int ab, int ac, int ad) : A(aa),B(aa, ab), C(aa, ac) { d = ad; }
	void fD() {
		b = 1;
		c = 2;
		a = 3;		// 여기서 문제 발생
	}
};

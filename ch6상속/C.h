#pragma once
#include "A.h"

class C : virtual public A
{
protected:
	int c;
public:
	C(int aa, int ac) : A(aa) { c = ac; }
};


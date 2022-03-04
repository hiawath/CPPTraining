#pragma once
#include "A.h"

class B : virtual public A
{
protected:
	int b;
public:
	B(int aa, int ab) : A(aa) { b = ab; }
};

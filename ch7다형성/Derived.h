#pragma once
#include "Base.h"
class Derived : public Base
{
private:
	int* D_buf;
public:
	Derived();
	virtual ~Derived();
};


#pragma once
#include <stdio.h>

class SomeRef
{
public:
	int& total;
	SomeRef(int& atotal);
	void OutTotal();
};


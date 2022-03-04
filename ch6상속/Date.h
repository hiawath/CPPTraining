#pragma once
#include <stdio.h>
#include <conio.h>

class Date
{
protected:
	int year, month, day;
public:
	Date(int y, int m, int d);
	void OutDate();
};



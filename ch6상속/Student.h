#pragma once
#include <stdio.h>
#include <string.h>
#include "Human.h"


class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum);
	void study();
	void report();
	void intro();
};




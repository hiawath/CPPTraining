#pragma once

#include <stdio.h>
#include <string.h>


class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	virtual void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};





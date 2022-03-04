#pragma once
#include "Human.h"
class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	void intro() override {
		printf("%d학번 %s입니다.\n", stunum, name);
	}
	virtual void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};



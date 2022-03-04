#pragma once
#include "Human.h"
#include "Student.h"
class Graduate : public Student
{
protected:
	char thesis[32];

public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	}
	void intro() {
		printf("%d Graduate %s입니다.\n", stunum, name);
	}

	void research() {
		printf("%s을 연구하고 논문을 쓴다.\n", thesis);
	}
	
};

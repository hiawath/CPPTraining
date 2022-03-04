#pragma once
#include "Student.h"
class Graduate : public Student
{
protected:
	char thesis[32];

public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis);
	void research();
};


#pragma once
#include <string>
class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage);
	void intro();
};

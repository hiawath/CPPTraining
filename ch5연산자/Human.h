#pragma once
#include <stdio.h>
#include <string.h>
class Human
{
private:
	char* pname;
	int age;

public:
	Human();
	Human(const char* aname, int aage);
	Human(const Human& other);
	//Human& operator =(const Human& other);

	~Human();

	void intro();
};


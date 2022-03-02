#pragma once
#include <stdio.h>
#include <string.h>

class NewHuman
{
private:
	char* pname;
	int age;

public:
	NewHuman(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("== <%s> °´Ã¼ »ý¼º ==\n", pname);
	}

	~NewHuman() {
		printf("== <%s> °´Ã¼°¡ ÆÄ±« ==\n", pname);
		delete[] pname;
	}

	void intro() {
		printf("ÀÌ¸§ = %s, ³ªÀÌ = %d\n", pname, age);
	}
};


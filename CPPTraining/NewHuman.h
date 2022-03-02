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
		printf("== <%s> ��ü ���� ==\n", pname);
	}

	~NewHuman() {
		printf("== <%s> ��ü�� �ı� ==\n", pname);
		delete[] pname;
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", pname, age);
	}
};


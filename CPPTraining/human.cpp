#include <stdio.h>
#include <string.h>
#include "human.h"
// ������

Human::Human(const char* aname, int age) {
	this->age = 0;
	this->age = age;
	strcpy_s(name, aname);
	
}

void Human::intro() {
	printf("�̸� = %s, ���� = %d\n", name, age);
}


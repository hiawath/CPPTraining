#include <stdio.h>
#include <string.h>
#include "human.h"
// 생성자

Human::Human(const char* aname, int age) {
	this->age = 0;
	this->age = age;
	strcpy_s(name, aname);
	
}

void Human::intro() {
	printf("이름 = %s, 나이 = %d\n", name, age);
}


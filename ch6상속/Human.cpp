#include "Human.h"

Human::Human(const char* aname, int aage) {
	strcpy(name, aname);
	age = aage;
}

void Human::intro() {
	printf("�̸� = %s, ���� = %d\n", name, age);
}

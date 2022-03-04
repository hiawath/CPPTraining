#include "Human.h"

Human::Human(const char* aname, int aage) {
	strcpy(name, aname);
	age = aage;
}

void Human::intro() {
	printf("이름 = %s, 나이 = %d\n", name, age);
}

#include "Student.h"

Student::Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
	stunum = astunum;
}

void Student::study() {
	printf("이이는 사, 이삼은 육, 이사 팔\n");
}

void Student::report() {
	printf("이름 : %s, 학번 : %d 보고서 제출합니다.\n", name, stunum);
}

void Student::intro() {
	printf("%d학번 %s입니다.\n", stunum, name);
}
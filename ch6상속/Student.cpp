#include "Student.h"

Student::Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
	stunum = astunum;
}

void Student::study() {
	printf("���̴� ��, �̻��� ��, �̻� ��\n");
}

void Student::report() {
	printf("�̸� : %s, �й� : %d ���� �����մϴ�.\n", name, stunum);
}

void Student::intro() {
	printf("%d�й� %s�Դϴ�.\n", stunum, name);
}

#include <iostream>
#include <stdio.h>
#include "cursor.h"



#include "RandNum.h"

RandNum::RandNum() {
	num = 0;
	randomize();
}

RandNum::RandNum(int seed) {

}
void RandNum::Generate() { num = random(100) + 1; }
BOOL RandNum::Compare(int input) {
	if (input == num) {
		std::cout << "������ϴ�." << std::endl;
		//printf("������ϴ�.\n");
		return TRUE;
	}
	else if (input > num) {
		printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
	}
	else {
		printf("�Է��� ���ں��� �� Ů�ϴ�.\n");
	}
	return FALSE;
}


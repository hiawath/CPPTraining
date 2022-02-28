
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
		std::cout << "맞췄습니다." << std::endl;
		//printf("맞췄습니다.\n");
		return TRUE;
	}
	else if (input > num) {
		printf("입력한 숫자보다 더 작습니다.\n");
	}
	else {
		printf("입력한 숫자보다 더 큽니다.\n");
	}
	return FALSE;
}


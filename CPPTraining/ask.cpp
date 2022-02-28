#include "ask.h"
#include <iostream>

void Ask::Prompt() {
	printf("\n제가 만든 숫자를 맞춰 보세요.\n");
}
BOOL Ask::AskUser() {
	printf("숫자를 입력하세요(끝낼 때는 999) : ");
	scanf_s("%d", &input);
	

	if (input == 999) {
		return TRUE;
	}
	return FALSE;
}
int Ask::GetInput() { return input; }

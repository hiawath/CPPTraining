#include "ask.h"
#include <iostream>

void Ask::Prompt() {
	printf("\n���� ���� ���ڸ� ���� ������.\n");
}
BOOL Ask::AskUser() {
	printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
	scanf_s("%d", &input);
	

	if (input == 999) {
		return TRUE;
	}
	return FALSE;
}
int Ask::GetInput() { return input; }

#ifndef ASK_H
#define ASK_H



#include <stdio.h>
#include "cursor.h"
class Ask
{
private:
	int input;

public:
	void Prompt();
	BOOL AskUser();
	int GetInput();
};
#endif
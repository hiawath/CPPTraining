#pragma once
//헤더 가드 시작
#ifndef RANDNUM_H
#define RANDNUM_H


#include <stdio.h>
#include "cursor.h"


class RandNum
{
private:
	int num;
	

public:
	RandNum();
	RandNum(int seed);
	void Generate();
	BOOL Compare(int input);
};



#endif
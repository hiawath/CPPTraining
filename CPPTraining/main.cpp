#include <stdio.h>
#include <string.h>

#include "main.h"


int main()
{
	Ref1();
	//classTest();

	auto a = 10;
	auto b = 3.14;
	auto c = "Hello world";
	auto d = 1;

	Human kim("±è»óÇü", 29);
	kim.intro();

	Time now(12, 30, 40);
	now.OutTime();
	Time noon(44000);
	noon.OutTime();

}


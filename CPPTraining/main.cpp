#include <stdio.h>
#include <string.h>

#include "main.h"
#include "NewHuman.h"
#include "Some.h"
#include "SomeRef.h"


int main()
{
	Ref1();
	//classTest();
	   
	auto a = 10;
	auto b = 3.14;
	auto c = "Hello world";
	auto d = 1;

	Human kim("�����", 29);
	kim.intro();

	Time now(12, 30, 40);
	now.OutTime();
	Time noon(44000);
	noon.OutTime();

	NewHuman boy("����ѹ��ź��̿͵η��", 12);
	boy.intro();

	NewHuman* leo;
	leo = new NewHuman("���������� ��ī������", 40);
	leo->intro();
	//delete leo;


	Some S(5);
	S.OutTotal();

	int value = 8;
	SomeRef Sref(value);
	Sref.OutTotal();

}


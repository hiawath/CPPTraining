#include "main.h"

int main()
{
	D d(1, 2, 3, 4);


	Human kim("�����", 29);
	kim.intro();
	Student han("���Ѱ�", 15, 123456);
	kim = han;
	kim.intro();


	han.intro();
	han.study();
	han.report();

	Graduate moon("������", 45, 920629, "���ӹ� ��� �м�");
	moon.research();
	moon.intro();
	moon.report();
	moon.study();

	DateTime now(2017, 6, 29, 12, 30, 58, 99);
	now.OutNow();
}
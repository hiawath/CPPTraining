#include "main.h"

int main()
{
	D d(1, 2, 3, 4);


	Human kim("김상형", 29);
	kim.intro();
	Student han("김한결", 15, 123456);
	kim = han;
	kim.intro();


	han.intro();
	han.study();
	han.report();

	Graduate moon("문종민", 45, 920629, "게임방 상권 분석");
	moon.research();
	moon.intro();
	moon.report();
	moon.study();

	DateTime now(2017, 6, 29, 12, 30, 58, 99);
	now.OutNow();
}
#include "main.h"
#include "Time.h"
#include <iostream>
#include "Human.h"


int main()
{

	Human kang("강감찬", 1424);
	Human boy;

	boy = kang;
	boy.intro();




	Time now2(1, 2, 3);
	Time* pTime;

	pTime = new Time(4, 5, 6);

	cout << "현재 시간은 " << now2 << "입니다." << endl;
	cout << "현재 시간은 " << pTime << "입니다." << endl;
	delete pTime;



	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;
	Time t4;

	t3 = ++t1;
	t3.OutTime();
	t4 = t1++;
	t4.OutTime();

	t3 = t1.AddTime(t2);
	t3.OutTime();

	t4 = t1.operator+(t2);
	t4.OutTime();

	t4 = t1+t2;
	t4.OutTime();

	Time now(11, 22, 33);
	now.OutTime();
	now.OutTime();
	
	now = 1 + now;
	
	now = now + 1;


}
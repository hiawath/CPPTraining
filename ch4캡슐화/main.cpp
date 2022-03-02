#include "Simple.h"
#include "Time.h"
#include "main.h"
#include "Car.h"
#include "Date.h"
#include "Time2.h"
#include "TimeFriend.h"
#include "DateFriend.h"
int main()
{
	Simple A(1), B(2);
	A.OutValue();
	B.OutValue();


	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Time now(12, 34, 56);
	now.SetHour(40);
	now.OutTime();
	now.SetHour(9);
	now.OutTime();

	//carDrive();

	Date d(2018, 06, 29);
	Time2 t(12, 34, 56);
	OutToday(d, t);

	DateFriend df(2018, 06, 29);
	TimeFriend tf(12, 34, 56);
	df.OutToday(tf);

}



void carDrive()
{
	Car C;
	int ch;

	for (;;) {
		gotoxy(10, 10);
		printf("1~5:기어 변속, 6:후진 기어, 0:기어 중립");
		gotoxy(10, 11);
		printf("위:액셀, 아래:브레이크, 좌우:핸들, Q:종료");
		if (_kbhit()) {
			ch = _getch();
			if (ch == 0xE0 || ch == 0) {
				ch = _getch();
				switch (ch) {
				case 75:
					C.RotateWheel(-5);
					break;
				case 77:
					C.RotateWheel(5);
					break;
				case 72:
					C.Accel();
					break;
				case 80:
					C.Break();
					break;
				}
			}
			else {
				if (ch >= '0' && ch <= '6') {
					C.ChangeGear(ch - '0');
				}
				else if (ch == 'Q' || ch == 'q') {
					exit(0);
				}
			}
		}
		C.Run();
		delay(10);
	}
}

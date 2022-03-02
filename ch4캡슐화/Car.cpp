#include "Car.h"

//Car::Car() { gear = 0; angle = 0; rpm = 0; }
Car::Car() :gear(0), angle(0), rpm(0) {}

void Car::ChangeGear(int aGear) {
	if (aGear >= 0 && aGear <= 6) {
		gear = aGear;
	}
}

void Car::RotateWheel(int Delta) {
	int tAngle = angle + Delta;
	if (tAngle >= -45 && tAngle <= 45) {
		angle = tAngle;
	}
}

void Car::Accel() {
	rpm = min(rpm + 100, 3000);
}

void Car::Break() {
	rpm = max(rpm - 500, 0);
}

void Car::Run() {
	int Speed;
	char Mes[128];
	gotoxy(10, 13);
	if (gear == 0) {
		puts("먼저 1~6키를 눌러 기어를 넣으시오           ");
		return;
	}
	if (gear == 6) {
		Speed = rpm / 100;
	}
	else {
		Speed = gear * rpm / 100;
	}

	sprintf(Mes, "%d의 속도로 %s쪽 %d도 방향으로 %s진중      ",
		abs(Speed), (angle >= 0 ? "오른" : "왼"), abs(angle),
		(gear == 6 ? "후" : "전"));
	puts(Mes);
}

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
		puts("���� 1~6Ű�� ���� �� �����ÿ�           ");
		return;
	}
	if (gear == 6) {
		Speed = rpm / 100;
	}
	else {
		Speed = gear * rpm / 100;
	}

	sprintf(Mes, "%d�� �ӵ��� %s�� %d�� �������� %s����      ",
		abs(Speed), (angle >= 0 ? "����" : "��"), abs(angle),
		(gear == 6 ? "��" : "��"));
	puts(Mes);
}

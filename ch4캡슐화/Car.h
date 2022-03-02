#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "cursor.h"

class Car
{
private:
	int gear;
	int angle;
	int rpm;

public:
	Car();
	void ChangeGear(int aGear);

	void RotateWheel(int Delta);

	void Accel();

	void Break();

	void Run();
};



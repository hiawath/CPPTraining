#pragma once
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "cursor.h"

class Point
{
protected:
	int x, y;
	char ch;

public:
	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }

	void show() {
		gotoxy(x, y); _putch(ch);
	}
	void hide() {
		gotoxy(x, y); _putch(' ');
	}
	void move(int nx, int ny) {
		this->hide();
		x = nx;
		y = ny;
		this->show();
	}
};

class Circle2 : public Point
{
protected:
	int radius;

public:
	Circle2(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }

	void show() {
		for (double a = 0; a < 360; a += 10) {
			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
			_putch(ch);
		}
	}
	void hide() {
		for (double a = 0; a < 360; a += 10) {
			gotoxy(int(x + sin(a * 3.14 / 180) * radius), int(y - cos(a * 3.14 / 180) * radius / 2));
			_putch(' ');
		}
	}
	
	void move(int nx, int ny) {
		hide();
		x = nx;
		y = ny;
		show();
	}
	
};

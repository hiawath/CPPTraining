#pragma once
#include <stdio.h>

class Shape
{
public:
	virtual void draw() = 0;
	virtual void test() {
		puts("Test");
	}

};
class Shape2:public Shape
{
public:
	virtual void draw2() = 0;
};

class Line2 : public Shape2
{
public:
	void draw() { puts("선을 긋습니다."); }
	void draw2() { puts("선을 긋습니다."); }
};


class Line : public Shape
{
public:
	void draw() { puts("선을 긋습니다."); }
};

class Circle : public Shape
{
public:
	void draw() { puts("동그라미 그렸다 치고."); }
};

class Rect : public Shape
{
public:
	void draw() { puts("요건 사각형입니다."); }
};



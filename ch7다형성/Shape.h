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
	void draw() { puts("���� �߽��ϴ�."); }
	void draw2() { puts("���� �߽��ϴ�."); }
};


class Line : public Shape
{
public:
	void draw() { puts("���� �߽��ϴ�."); }
};

class Circle : public Shape
{
public:
	void draw() { puts("���׶�� �׷ȴ� ġ��."); }
};

class Rect : public Shape
{
public:
	void draw() { puts("��� �簢���Դϴ�."); }
};



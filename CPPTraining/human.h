#ifndef HUMAN_H
#define HUMAN_H


class Human
{
private:
	char name[12];
	int age;

public:
	// »ý¼ºÀÚ
	Human(const char* aname, int aage);
	void intro();
};
#endif
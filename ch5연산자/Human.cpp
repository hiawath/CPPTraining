#include "Human.h"
#include <iostream>
Human::Human() {
	pname = new char[1];
	pname[0] = NULL;
	age = 0;
}

Human::Human(const char* aname, int aage) {
	pname = new char[strlen(aname) + 1];
	strcpy(pname, aname);
	age = aage;
}

Human::Human(const Human& other) {
	pname = new char[strlen(other.pname) + 1];
	strcpy(pname, other.pname);
	age = other.age;
}

/*
Human& Human::operator =(const Human& other) {
	if (this != &other) {
		delete[] pname;
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}
	return *this;
}
*/
Human::~Human() {
//TODO list	
	if (true)
	{
		delete[] pname;
		pname = NULL;
		
	}
	else {
		std::cout << "2qjsWo";
	}
}

void Human::intro()
{
	printf("이름 = %s, 나이 = %d\n", pname, age);
}

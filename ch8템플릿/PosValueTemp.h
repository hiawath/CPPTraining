#pragma once
#include <cursor.h>
#include <iostream>
using namespace std;

template <typename T>
class PosValue
{
private:
	int x, y;
	T value;
public:
	PosValue(int ax, int ay, T av);
	void outvalue();
};

template<typename T>
PosValue<T>::PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }

template<typename T>
void PosValue<T>::outvalue() {
	gotoxy(x, y);
	cout << value << endl;
}

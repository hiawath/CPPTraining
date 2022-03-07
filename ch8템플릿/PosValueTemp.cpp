#include "PosValueTemp.h"

template<typename T>
PosValue<T>::PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }

template<typename T>
void PosValue<T>::outvalue() {
	//gotoxy(x, y);
	cout << value << endl;
}
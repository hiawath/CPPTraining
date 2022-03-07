#pragma once
#include <stdio.h>

template <typename T>
void Swap(T& a, T& b)
{
	T t;
	t = a; a = b; b = t;
}




#pragma once
#include <stdio.h>
#include <malloc.h>
#include <memory.h>

template <class T>
void swaparray(T* a, T* b, int num)
{
	void* t;

	t = malloc(num * sizeof(T));
	memcpy(t, a, num * sizeof(T));
	memcpy(a, b, num * sizeof(T));
	memcpy(b, t, num * sizeof(T));
	free(t);
}



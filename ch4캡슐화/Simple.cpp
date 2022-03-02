#include "Simple.h"
#include <stdio.h>

Simple::Simple(int value) : value(value) {  }

void Simple::OutValue() {
	printf("value = %d\n", value);
}

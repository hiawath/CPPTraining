#include "SomeRef.h"

SomeRef::SomeRef(int& atotal)	: total(atotal) { }

void SomeRef::OutTotal() { printf("%d\n", total); }

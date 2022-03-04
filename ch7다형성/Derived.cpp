#include "Derived.h"

Derived::Derived() { D_buf = new int[32]; puts("Derived »ý¼º"); }

Derived::~Derived() { delete[] D_buf; puts("Derived ÆÄ±«"); }

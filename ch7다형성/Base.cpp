#include "Base.h"

Base::Base() { B_buf = new char[10]; puts("Base »ý¼º"); }

Base::~Base() { delete[] B_buf; puts("Base ÆÄ±«"); }

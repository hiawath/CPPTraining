#include "Graduate.h"

Graduate::Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum) {
	strcpy(thesis, athesis);
}

void Graduate::research() {
	printf("%s�� �����ϰ� ���� ����.\n", thesis);
}

#include "main.h"
#include "RandNum.h"
#include "ask.h"
#include "timeTest.h"


void classTest() {
	RandNum R;
	Ask A;
	for (;;) {

		R.Generate();
		A.Prompt();

		for (;;) {
			if (A.AskUser()) {
				exit(0);
			}
			if (R.Compare(A.GetInput())) {
				break;
			}
		}
	}
}

void Ref1()
{
	int i = 3;
	int& ri = i;

	printf("i = %d, ri = %d\n", i, ri);
	ri++;
	printf("i = %d, ri = %d\n", i, ri);
	printf("i번지 = %x, ri번지 = %x\n", &i, &ri);
}


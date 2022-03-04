#include "main.h"


int main() {

	char sss[] = {"¡Úhellow"};// "¡Ú" ;
	for (size_t i = 0; i < sizeof(sss); i++)
	{
		printf("Test : %lc ", sss[i]);
	}
	std::cout << std::endl;

	std::vector<int> v;

	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	swap<int>(a, b);
	swap<double>(c, d);
	swap<char>(e, f);
	printf("a = %d,b = %d\n", a, b);
	printf("c = %f,d = %f\n", c, d);
	printf("e = %c,f = %c\n", e, f);


	int aa = max(1, 2);
	double bb = max(1.1, 2.2);
	int cc = max<int>(2, 3.14);

	printf("c = %d\n", cc);



	unsigned un = cast<unsigned>(1234);
	double dou = cast<double>(5678);

	printf("u = %d, d = %f\n", un, dou);

	int aaa[] = { 1,2,3 }, bbb[] = { 4,5,6 };
	char ccc[] = "¹®ÀÚ¿­", ddd[] = "string";
	swaparray(aaa, bbb, sizeof(a) / sizeof(aaa[0]));
	printf("before c = %s,d = %s\n", ccc, ddd);
	swaparray(ccc, ddd, sizeof(c) / sizeof(ccc[0]));
	printf("after c = %s,d = %s\n", ccc, ddd);



}
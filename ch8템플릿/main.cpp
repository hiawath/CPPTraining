#include "main.h"


int main() {

	
	/**
	std::vector<int> v;

	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	Swap<int>(a, b);
	Swap<double>(c, d);
	Swap<char>(e, f);
	printf("a = %d,b = %d\n", a, b);
	printf("c = %f,d = %f\n", c, d);
	printf("e = %c,f = %c\n", e, f);


	int aa = Max(1, 2);
	double bb = Max(1.1, 2.2);
	int cc = Max<int>(2, 3.14);

	printf("c = %d\n", cc);



	unsigned un = cast<unsigned>(1234);
	double dou = cast<double>(5678);

	printf("u = %d, d = %f\n", un, dou);

	int aaa[] = { 1,2,3 }, bbb[] = { 4,5,6 };
	char ccc[] = "hellow", ddd[] = "string";
	swaparray(aaa, bbb, sizeof(a) / sizeof(aaa[0]));
	printf("before c = %s,d = %s\n", ccc, ddd);
	swaparray(ccc, ddd, sizeof(c) / sizeof(ccc[0]));
	//printf("after c = %s,d = %s\n", ccc, ddd);

	**/

	PosValue<int> iv(10, 10, 2);
	PosValue<char> cv(25, 5, 'C');
	PosValue<double> dv(30, 15, 3.14);
	iv.outvalue();
	cv.outvalue();
	dv.outvalue();


	Util u;
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	u.swap(a, b);
	u.swap(c, d);
	u.swap(e, f);
	printf("a = %d,b = %d\n", a, b);
	printf("c = %f,d = %f\n", c, d);
	printf("e = %c,f = %c\n", e, f);


	TempArray<int, 5> ari;
	ari.SetAt(1, 1234);
	ari.SetAt(1000, 5678);
	printf("%d\n", ari.GetAt(1));
	printf("%d\n", ari.GetAt(5));
}
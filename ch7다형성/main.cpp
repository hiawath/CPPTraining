#include "main.h"

void IntroSomeBody(Human* pH) {
	pH->intro();
}

int main()
{
	Base* pB;
	pB = new Derived;

	delete pB;


	/*
	Point p(1, 1, 'P');
	Circle2 c(20, 10, 'C', 12);

	p.show();
	c.show();

	_getch();
	p.move(40, 1);
	_getch();
	c.move(40, 10);
	_getch();
	
	*/
	/*
	Rect r =  Rect();
	r.draw();
	r.test();
	
	Shape* ar[] = { new Rect(), new Circle(), new Rect(), new Line() };

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
		ar[i]->draw();
	}
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
		delete ar[i];
	}
	


	*/
	/*
	Human h("김사람", 10);
	Student s("이학생", 15, 1234567);
	Graduate g("Park", 25, 9876, "sciene");
	
	IntroSomeBody(&h);
	IntroSomeBody(&s);
	IntroSomeBody(&g);
	
	h.intro();
	s.study();
	g.research();
	*/
}

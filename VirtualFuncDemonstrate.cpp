#include <iostream>

using namespace std;

class Base
{
	public:
		virtual void display()
		{ 
			cout<<"Content of base class.\n"; 
		}
};

class D1 : public Base
{
	public:
		void display()
		{ 
			cout<<"Content of first derived class.\n"; 
		}
};

class D2 : public Base
{
	public:
		void display()
		{ 
			cout<<"Content of second derived class.\n"; 
		}
};

int main()
{
	Base *b;

	D1 d1;
	D2 d2;

	/* You cannot use this code here because the function of base class is virtual. */
	/* b->display();*/  

	b = &d1;
	b->display();   /* calls display() of class derived D1 */

	b = &d2;           
	b->display();   /* calls display() of class derived D2 */

	return 0;
}

#include <iostream>
#include <stdlib.h>

using namespace std;

class BaseClass{
	public :
		virtual void Display(){
			cout << "Base Class Content" << endl;
		}
};

class FirstDerivedClass : public BaseClass{
	public :
		void Display(){
			cout << "First Derived Class Content" << endl;
		}
};

class SecondDerivedClass : public BaseClass{
	public :
		void Display(){
			cout << "Second Derived Class Content" << endl;
		}
};

int main(){
	BaseClass *BaseObj;
	FirstDerivedClass DerivedObj1;
	SecondDerivedClass DerivedObj2;
	BaseObj = &DerivedObj1;
	BaseObj->Display();
	BaseObj = &DerivedObj2;
	BaseObj->Display();
	return 0;
}

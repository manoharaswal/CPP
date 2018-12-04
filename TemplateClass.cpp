#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
class BaseClass{
	T x;
	public :
		BaseClass(){}
		BaseClass(T a){
			x = a;
		}

		void Display(){
			cout << "x : "<< x << endl;
		}
};

int main(){
	BaseClass <char> CharObj('D');
	CharObj.Display();

	BaseClass <float> FloatObj(56.23f);
	FloatObj.Display();

	BaseClass <int> IntObj(546);
	IntObj.Display();

	BaseClass <double> DoubleObj(10.5);
	DoubleObj.Display();

	return 0;
}


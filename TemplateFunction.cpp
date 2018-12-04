#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
void GreaterNumber(T a,T b){
	if(a > b)
		cout << "Greater Number : "<< a << endl;
	else
		cout << "Greater Number : "<< b << endl;
}

int main(){
	GreaterNumber(8,10);
	GreaterNumber(5.6,9.8);
	GreaterNumber('a','b');
	return 0;
}

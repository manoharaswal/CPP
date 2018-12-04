#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
void Display(T a){
	cout <<"Template Fucntion Called. : "<< a << endl;
}

void Display(int a){
	cout <<"Normal Function Called. : "<< a << endl;
}

int main(){
	Display(12.4);
	Display(56);
	Display('A');
	Display("Manohar");
	return 0;
}

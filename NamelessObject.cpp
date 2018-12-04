#include <iostream>
#include <stdlib.h>

using namespace std;

class Base{
	int x;
	public :
		Base(int y = 10){
			x = y;
		}
	
		void Display(){
			cout << "x : "<< x << endl;
		}
};

int main(){
	Base().Display();
	Base(100).Display();
	return 0;
}

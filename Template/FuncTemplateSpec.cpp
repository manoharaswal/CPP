#include <iostream>

using namespace std;

template <class T>

void func(T a)
{
	cout << "The main template fun() : " << a << endl;
}

template<>

void func(int a)
{
	cout << "Specialized Template for int type : "<< a << endl;
}

int main()
{
	func <char> ('a');
	func <int> (10);
	func <float> (10.4);
	return 0;
}

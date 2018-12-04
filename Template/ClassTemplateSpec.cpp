#include <iostream>

using namespace std;

template <class T>

class Test
{
	public :
		Test()
		{
			cout << "General template objects" << endl;
		}
};

template <>

class Test <int>
{
	public :
		Test()
		{
			cout << "Specialized template objects." << endl;
		}
};

int main()
{
	Test <int> a;
	Test <char> b;
	Test <float> c;
	return 0;	
}

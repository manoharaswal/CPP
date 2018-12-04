#include <iostream>

using namespace std;

bool inRange(unsigned low, unsigned high, unsigned x)
{
	return ((x - low) <= (high - low));
}

int main()
{
	inRange(10,100,30)? cout <<"[10,100,30] Yes\n" : cout <<"[10,100,30] No\n";
	inRange(10,100,5)? cout <<"[10,100,5] Yes\n" : cout <<"[10,100,1] No\n";
	inRange(10,100,120)? cout <<"[10,100,120] Yes\n" : cout <<"[10,100,120] No\n";
}


#include <iostream>

using namespace std;

int main()
{
	int a,b,c,larg;
	cin >> a >> b >> c;
	larg = (a>b)?(a>c?a:c):(b>c?b:c);
	cout << "Greatest Of Three : " <<  larg << endl;
}

#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string str = "Hello World";
	cout << "Original String : " << str << endl;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << "String in Upercase : " << str << endl;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << "String in Lowercase : " << str << endl;
	return 0;
}

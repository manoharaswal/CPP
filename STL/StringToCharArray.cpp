#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str = "Manohar Singh Aswal";
	int len = str.length();
	char char_array[len + 1];
	strcpy(char_array,str.c_str());
	cout << char_array << endl;
	return 0;
}

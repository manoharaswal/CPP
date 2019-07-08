#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	vector <int>arr1 = {1,2,3,4};
	vector <int>arr2 = {5,6,7,8};
	int len = arr1.size();
	vector <int>add(len);
	transform(arr1.begin(), arr1.end(), arr2.begin(), add.begin(), plus<int>());
	for(auto i = 0; i < len; i++)
		cout << add.at(i) << " ";
	return 0;
}

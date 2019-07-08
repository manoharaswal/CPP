#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr1[] = {1,2,3,4};
	int arr2[] = {5,6,7,8};
	int len = sizeof(arr1)/sizeof(arr1[0]);
	int add[len] = {0};
	transform(arr1, arr1 + len, arr2, add, plus<int>());
	for(auto i = 0; i < len; i++)
		cout << add[i] << " ";
	return 0;
}

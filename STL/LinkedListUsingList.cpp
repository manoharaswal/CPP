#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int>Node;
	int n;
	int Data;
	int pos;
	cout << "Enter The Number Of Node : ";
	cin >> n;
	for(int i =0;i < n;i++){
		cout << "Enter Element : ";
		cin >> Data;
		Node.push_back(Data);
	}

	list<int>::iterator i;
	cout << "Linked list contain the following data after creation" << endl; 
	for(i = Node.begin();i != Node.end();i++){
		cout << *i << " ";
	}
	cout << endl;

	cout << "Enter new element at the beginning :";
	cin >> Data;
	Node.push_front(Data);

	cout << "Linked list after adding element at the beginning" << endl;
	for(i = Node.begin();i != Node.end();i++){
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}

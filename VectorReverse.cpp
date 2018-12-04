#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> array;
	vector <int> :: iterator i;
	vector <int> :: reverse_iterator ir;

	for (int ir = 1; ir <= 5; ir++)
		array.push_back(ir);

	cout << "Output of begin and end\t:\n";
	for (i = array.begin(); i != array.end(); ++i)
		cout << *i << '\t';

	cout << endl << endl;
	cout << "Output of rbegin and rend\t:\n";
	for (ir = array.rbegin(); ir != array.rend(); ++ir)
		cout << *ir << '\t';
	cout << '\n';
	return 0;

}


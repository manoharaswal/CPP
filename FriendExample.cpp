#include <iostream>

using namespace std;

class Manohar
{
	public:
		Manohar()
		{
			ManoharVar = 0;
		}
	private:
		int ManoharVar;
		friend void ManoharFriend(Manohar &mfo);
};

void ManoharFriend(Manohar &mfo)
{
	mfo.ManoharVar = 99;
	cout << mfo.ManoharVar << endl;
}

int main()
{
	Manohar obj;
	ManoharFriend(obj);
	return 0;
}

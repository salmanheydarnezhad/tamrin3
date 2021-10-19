
#include<iostream>

using namespace std;
int main()
{
	int tas, add;
	while (1) {
		cout << "add az 1 ta 100 vared konid : ";
		cin >> add;
		tas = (add % 6) + 1;
		cout << "tas = " << tas << endl;
		if (tas == 6)
			cout << "mitavanid dobare biandazid." << endl;
		else
			break;
	}
	system("pause");
    return 0;
}


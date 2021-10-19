
#include<iostream>
using namespace std;
int main()
{
	int add=0,a;
	char c[10];
	while (1) {
		cout << "add ra vared konid : ";
		cin >> a;
		add = add + a;
		cout << "baray khroj (exit) ra vared konid : ";
		cin >> c;
		if (c[0] == 'e' && c[1] == 'x' && c[2] == 'i' && c[3] == 't' && c[4] == '\0')
			break;
	}
	cout << "majmoe add ha = " << add << endl;
	system("pause");
    return 0;
}


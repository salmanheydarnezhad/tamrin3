
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, i = 1;
	cout << "n ra vared konid : ";
	cin >> n;
	while (1) {
		if (i <= n)
			cout << "*";
		else
			break;
		i++;
		if (i <= n)
			cout << "#";
		else
			break;
		i++;
	}
	cout << endl;
	_getch();
    return 0;
}


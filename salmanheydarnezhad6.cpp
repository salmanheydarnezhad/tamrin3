
#include<iostream>

using namespace std;
int main()
{
	int a=1, b=1, c,i=2,n;
	cout << "n ra vared konid : ";
	cin >> n;
	cout << a << "," << b;
	while (i<n) {
		c = a + b; 
		cout << "," << c;
		a = b;
		b = c;
		i++;
	}
	cout << endl;
	system("pause");
    return 0;
}


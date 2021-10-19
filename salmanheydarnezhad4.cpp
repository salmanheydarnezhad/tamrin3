
#include<iostream>
using namespace std;
int main()
{
	int n, i = 0;
	float nomre[50], max = 0, min = 20, miangin = 0;
	cout << "tedad danshjo ha ra vared konid : ";
	cin >> n;
	while (i<n)
	{
		cout << "nomre ra vared konid : ";
		cin >> nomre[i];
		i++;
	}
	i = 0;
	while (i<n)
	{
		if (nomre[i] > max)
			max = nomre[i];
		if (nomre[i] < min)
			min = nomre[i];
		miangin = miangin + nomre[i];
		i++;
	}
	cout << "miangin = " << miangin/n << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
	system("pause");
    return 0;
}


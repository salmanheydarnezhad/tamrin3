
#include<iostream>
using namespace std;
int main()
{
	int h,m,s,zaman;
	cout << "zaman ra vared konid(h:m:s) : ";
	cin >> h >> m >> s;
	zaman = (h * 3600) + (m * 60) + s;
	cout << zaman << " s" << endl;
	system("pause");
    return 0;
}


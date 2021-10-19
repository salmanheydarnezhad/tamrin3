
#include<iostream>
using namespace std;
int main()
{
	int h,m,s,zaman;
	cout << "zaman ra be sanie vared konid : ";
	cin >> zaman;
	h = zaman / 3600;
	m = (zaman % 3600) / 60;
	s = (zaman % 60);
	cout << h << " : " << m << " : " << s << endl;
	system("pause");
    return 0;
}


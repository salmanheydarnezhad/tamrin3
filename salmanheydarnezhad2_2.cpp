
#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	int A[100], N;
	cout << "N ra vared konid : ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "add " << i + 1 << ": ";
		cin >> A[i];
		for (int j = 0; j < i; j++)
			if (A[i] == A[j]) {
				i--;
				cout << "add tekrari ast!" << endl;
				break;
			}
	}
	cout << "adad ha: " << endl;
	for (int i = 0; i < N; i++)
		cout << A[i] << endl;
	_getch();
    return 0;
}


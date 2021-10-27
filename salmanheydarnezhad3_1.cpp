
#include <iostream>
#include<string>
#include<time.h>
#include<conio.h>
using namespace std;

int main()
{
	string words[3] = { "apple","car","bear" };
	string word;
	char user_letter;
	int random;

	srand(time(0));
	random = rand() % 3;
	word = words[random];

	for (int i = 0; i < word.size(); i++){
		cout << " _ ";
	}

	int j = 0,ch;
	while (j != word.size()){
		cout << "\nEnter a letter: ";
		cin >> user_letter;
		ch = user_letter;
		if (user_letter >= 'A' && user_letter <= 'Z'){
			ch += 32;
			user_letter = ch;
		}
		for (int i = 0; i < word.size(); i++){
			if (user_letter == word[i]) {
				cout << user_letter;
				j++;
			}
			else
				cout << " _ ";
		}
	}
	cout << endl << words[random];
	cout << endl << endl << "barnde shodid." << endl;
	_getch();
    return 0;
}


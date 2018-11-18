#include<iostream>
#include<string>
using namespace std;

//크로아티안 알파벳 2941 - 김민진

int main(){
	const int MAX = 100;
	char text[MAX];
	cout << "Enter (1~100 alphabets): ";
	string word;
	cin >> word;

	//글자 수 제한
	if (word.length() > 100)
		return 0;
	
	for (int i = 0; i < int(word.length()); i++)
		text[i] = word[i];

	//크로아티안 알파벳 개수 구하기
	int count = 0;

	for (int j = 0; j < int(word.length()); j++) {
		if (text[j] == '-' || text[j] == '=') {
			if (j > 1) {
				if (text[j] == '=' && text[j - 1] == 'z' && text[j - 2] == 'd')
					count--;
			}
			else
				continue;
		}
		else if (text[j + 1] == 'j' && (text[j] == 'l' || text[j] == 'n'))
			continue;
		else
			count++;
	}

	cout << "알파벳의 갯수 : " << count << endl;

	system("pause");
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

//ũ�ξ�Ƽ�� ���ĺ� 2941 - �����

int main(){
	const int MAX = 100;
	char text[MAX];
	cout << "Enter (1~100 alphabets): ";
	string word;
	cin >> word;

	//���� �� ����
	if (word.length() > 100)
		return 0;
	
	for (int i = 0; i < int(word.length()); i++)
		text[i] = word[i];

	//ũ�ξ�Ƽ�� ���ĺ� ���� ���ϱ�
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

	cout << "���ĺ��� ���� : " << count << endl;

	system("pause");
	return 0;
}
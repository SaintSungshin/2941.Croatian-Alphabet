#include<iostream>
#include<string>
using namespace std;

//ũ�ξ�Ƽ�� ���ĺ� 2941 -�����

int main()
{
	const int MAX = 100;
	char text[MAX];
	cout << "Enter: ";
	string word;
	cin >> word;

	//���� ��� �ʿ�

	for (int i = 0; i < int(word.length()); i++)
		text[i] = word[i];

	int count = 0;

	for (int j = 0; j < int(word.length()); j++) {
	

		if (text[j] == '-' || text[j] == '=') {
			continue;
			if (j > 1) {
				if (text[j] == 'd' && text[j - 1] == 'z' && text[j - 2] == '=')
					continue;
			}
		}
		else if (text[j + 1] == 'j' && (text[j] == 'l' || (text[j] == 'n')))
			continue;
		else
			count++;
	}

	cout << "���ĺ��� ���� : " << count - 1 << endl;

	system("pause");
	return 0;
}
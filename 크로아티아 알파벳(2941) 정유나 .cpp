#include<iostream>
#include<string>
using namespace std;

int main()
{
	const int NUMBER = 100;
	char text[100];

	//�Է��� ���ĺ� text���� �ޱ�
	
	cout << "Enter the alphabet : " << endl;
	int i = 0;
	while (i < NUMBER) {
		cin >> text[i];
		if (text[i] == '0')	//0�� �Է¹����� �ݺ��� �׸�����
			break;
		
		i++;
	}

	int count = 0;
	
	for (int j = 0; j <= i; j++) {
		/*
		if (!(text[j] == '-') || !(text[j] == '=')|| !(text[j] == 'd'&&text[j + 1] == 'z') || !(text[j] == 'l' && text[j + 1] == 'j') || !(text[j] == 'n'&&text[j + 1] == 'j'))
			count++;
		*/
		if ((text[j] == '-') || (text[j] == '='))
			continue;
		else if ((text[j] == 'd'&&text[j + 1] == 'z') || (text[j] == 'l' && text[j + 1] == 'j') || (text[j] == 'n'&&text[j + 1] == 'j'))
			continue;
		else
			count++;
	}

	cout << "���ĺ��� ���� : " << count-1 << endl;	//0ģ�� �������� ����

	return 0;
}
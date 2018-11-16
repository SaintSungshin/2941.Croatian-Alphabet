#include<iostream>
#include<string>
using namespace std;

int main()
{
	const int NUMBER = 100;
	char text[100];

	//입력학 알파벳 text에서 받기
	
	cout << "Enter the alphabet : " << endl;
	int i = 0;
	while (i < NUMBER) {
		cin >> text[i];
		if (text[i] == '0')	//0을 입력받으면 반복문 그만돌기
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

	cout << "알파벳의 갯수 : " << count-1 << endl;	//0친것 갯수에서 빼기

	return 0;
}
#include <iostream>
#include<string>
using namespace std;

int main()
{
	const int size = 100;
	char list[100];
	int i = 0;

	cout << "Enter the text: ";

	while (i < size)
	{
		cin >> list[i];
		if (list[i] == '0')	
			break;

		i++;
	}
	int count = 0;

	/*
	for (int i = 0; i < size; i++)
	{
	if (list[i] == 'c'&&list[i+1] == '=')
	count++;
	if (list[i] == 'c'&&list[i+1] == '-')
	count++;
	if (list[i] == 'dz=')
	count++, count++;
	if (list[i] == 'd-')
	count++;
	if (list[i] == 'lj')
	count++, count++;
	if (list[i] == 'nj')
	count++, count++;
	if (list[i] == 's=')
	count++;
	if (list[i] == 'z=')
	count++;
	�������� �ڵ������ ���� ��ź�Ͽ� �º��մϴ�. }*/

	for (int j = 0; j <= i; j++)
	{
		if ((list[j] == '-') || (list[j] == '='))
			continue;
		else if ((list[j] == 'd'&&list[j + 1] == 'z') || (list[j] == 'l' && list[j + 1] == 'j') || (list[j] == 'n'&&list[j + 1] == 'j'))
			continue;
		else
			count++;
	}
	cout << "ũ�ξ�Ƽ�� ���ĺ��� ������ " << count - 1 << endl;
	return 0;
}

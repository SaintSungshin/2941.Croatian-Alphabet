#include <iostream>
#include<string>
using namespace std;

int main()
{
	int size = 100;
	char list[100];

	cout << "Enter the text: ";
	for (int i = 0; i < size; i++)
	{
		cin >> list[i];
		if (list[i] == '0')
			break;
	}
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] == 'c=')
			count++;
		if (list[i] == 'c-')
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
	}
	cout <<"크로아티아 알파벳의 개수는 " <<count-1 << endl;
	return 0;
}
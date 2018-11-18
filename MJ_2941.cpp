#include<iostream>
#include<string>
using namespace std;

//Å©·Î¾ÆÆ¼¾È ¾ËÆÄºª 2941 -±è¹ÎÁø

int main()
{
	const int MAX = 100;
	char text[MAX];
	cout << "Enter: ";
	string word;
	cin >> word;

	//Á¦ÇÑ ¸í·É ÇÊ¿ä

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

	cout << "¾ËÆÄºªÀÇ °¹¼ö : " << count - 1 << endl;

	system("pause");
	return 0;
}
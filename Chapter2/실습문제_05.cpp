#include <iostream>
using namespace std;
int main() {
	char str[100];
	int search = 'x';
	int count = 0;

	cout << "문자들을 입력하라(100미만) >> ";
	cin.getline(str, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (search == str[i])
			count++;
	}
	cout << "x의 개수는 " << count;
	return 0;
}

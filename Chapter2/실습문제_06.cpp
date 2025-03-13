#include <iostream>
using namespace std;
int main() {
	string str1;
	string str2;
	cout << "새 암호를 입력하라 >> ";
	cin >> str1;
	cout << "새 암호를 다시 한 번 입력하라 >> ";
	cin >> str2;
	if (str1.compare(str2) == 0)
		cout << "같다.";
	else
		cout << "다르다.";
}

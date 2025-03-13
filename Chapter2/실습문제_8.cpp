#include <iostream>
#include <string>
using namespace std;

int main() {
	char name[100];
	int maxLength = 0;
	string maxName;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << (i + 1) << " : ";
		cout << name << "\n";

		if (strlen(name) > maxLength) {
			maxName = name;
			maxLength = strlen(name);
		}
	}

	cout << "가장 긴 이름은 " << maxName;
}

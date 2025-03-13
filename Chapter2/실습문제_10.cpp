#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cout << "문자열 입력>>";
	cin >> input;

	// string 객체에서 각 글자 빼오기
	for (int i = 1; i < input.length() + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << input[j];
		}
		cout << "\n";
	}
}

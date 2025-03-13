//실습 문제 2단원

//1
#include<iostream>
using namespace std;
int num = 1;
int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << num << " ";
			num++;
		}
		cout << "\n";
	}
	return 0;
}

//2
#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " X " << j << " = " << i * j << "   ";
		}
		cout << "\n";
	}
	return 0;
}

//3
#include<iostream>
using namespace std;
int main() {
	cout << "두 수를 입력하라 >> ";
	int n1, n2;
	cin >> n1 >> n2;
	if (n1 > n2) {
		cout << n1;
	}
	else
		cout << n2;
	return 0;
}

//4
#include<iostream>
#include <algorithm>
using namespace std;
float maxnum = 0;
int main() {
	float n1, n2, n3, n4, n5;
	cout << "5개의 실수를 입력하라>> ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	if (n1 > n2) {
		maxnum = n1;
	}
	else
		maxnum = n2;

	if (n3 > maxnum) {
		maxnum = n3;
	}
	else
		maxnum = maxnum;

	if (n4 > maxnum) {
		maxnum = n4;
	}
	else
		maxnum = maxnum;

	if (n5 > maxnum) {
		maxnum = n5;
	}
	else
		maxnum = maxnum;
	cout << maxnum;
}

//5
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

//6
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

//7
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char A[] = "yes";
	char B[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(B, 100);
		if (strcmp(A, B) == 0) break;
	}

	cout << "종료합니다...";

	return 0;
}

//8
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

//9
#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	string addr;
	string age;

	cout << "이름은?  >> \n";
	getline(cin, name);
	
	cout << "주소는?  >> \n";
	getline(cin, addr);
	
	cout << "나이는?  >> \n";
	getline(cin, age);
	
	cout << name << ", " << addr << ", " << age;
}

//10
#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cout << "문자열 입력>>";
	cin >> input;

	for (int i = 1; i < input.length() + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << input[j];
		}
		cout << "\n";
	}
}

//11
#include <iostream>
using namespace std;

int main() {
	int k, n = 0, sum = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;

	for (k = 1; k <= n; k++) {
		sum += k;
	}

	cout << "1부터 " << n << "까지의 합은 " << sum << "입니다.";
	return 0;
}

//12
#include <iostream>
using namespace std;
int sum(int a, int b);

int main() {
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.\n";
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}

//13
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	int n = 0;
	while (n != 4) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		cin >> n;

		switch (n)
		{
			int howMany;
		case 1:
			cout << "몇인분?";
			cin >> howMany;
			cout << "짬뽕 " << howMany << "인분 나왔습니다.\n";
			break;
		case 2:
			cout << "몇인분?";
			cin >> howMany;
			cout << "짜장 " << howMany << "인분 나왔습니다.\n";
			break;
		case 3:
			cout << "몇인분?";
			cin >> howMany;
			cout << "군만두 " << howMany << "인분 나왔습니다.\n";
			break;
		case 4:
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		default:
			cout << "다시 주문하세요!!.\n";
			break;
		}
	}
}

//14
#include <iostream>
#include <string>
using namespace std;

int main() {
	string order;
	int num, earnMoney = 0;
	cout << "에스프레소 2000원, 아케리카노 2300원, 카푸치노 2500원입니다.\n";

	while (earnMoney <= 20000) {
		cout << "주문>> ";
		cin >> order >> num;
		int tmpMoney;
		if (order == "에스프레소") {
			tmpMoney = 2000 * num;
		}
		else if (order == "아메리카노") {
			tmpMoney = 2300 * num;
		}
		else if (order == "카푸치노") {
			tmpMoney = 2500 * num;
		}
		earnMoney += tmpMoney;
		cout << tmpMoney << "원입니다. 맛있게 드세요\n";
	}
	cout << "오늘 " << earnMoney << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
}

//15
#include <iostream>
using namespace std;

int main() {
	int operand1, operand2;
	char operator1;
	while (true) {
		cout << "? ";
		cin >> operand1 >> operator1 >> operand2;

		int result;
		switch (operator1) {
		case '+':
			result = operand1 + operand2;
		case '-':
			result = operand1 - operand2;
		case '*':
			result = operand1 * operand2;
		case '/':
			result = operand1 / operand2;
		case '%':
			result = operand1 % operand2;
		}

		cout << operand1 << operator1 << operand2 << "=" << result << "\n";
	}
}

//16
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다. \n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다. \n";

	int count, total = 0;
	char input[10000];

	cin.getline(input, 10000, ';');

	for (int i = 0; i <= strlen(input); i++) {
		if (isalpha(input[i]) != 0) {
			input[i] = tolower(input[i]);
			total++;
		}
	}
	cout << "총 알파벳 수 " << total << "\n\n";

	for (char c = 'a'; c <= 'z'; c++) {
		count = 0;
		for (int j = 0; j <= strlen(input); j++) {
			if (input[j] == c) {
				count++;
			}
		}
		cout << c << " (" << count << ")\t: ";
		for (int k = 0; k < count; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
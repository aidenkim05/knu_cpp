//�ǽ� ���� 2�ܿ�

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
	cout << "�� ���� �Է��϶� >> ";
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
	cout << "5���� �Ǽ��� �Է��϶�>> ";
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

	cout << "���ڵ��� �Է��϶�(100�̸�) >> ";
	cin.getline(str, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (search == str[i])
			count++;
	}
	cout << "x�� ������ " << count;
	return 0;
}

//6
#include <iostream>
using namespace std;
int main() {
	string str1;
	string str2;
	cout << "�� ��ȣ�� �Է��϶� >> ";
	cin >> str1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��϶� >> ";
	cin >> str2;
	if (str1.compare(str2) == 0)
		cout << "����.";
	else
		cout << "�ٸ���.";
}

//7
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char A[] = "yes";
	char B[100];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(B, 100);
		if (strcmp(A, B) == 0) break;
	}

	cout << "�����մϴ�...";

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

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << (i + 1) << " : ";
		cout << name << "\n";

		if (strlen(name) > maxLength) {
			maxName = name;
			maxLength = strlen(name);
		}
	}

	cout << "���� �� �̸��� " << maxName;
}

//9
#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	string addr;
	string age;

	cout << "�̸���?  >> \n";
	getline(cin, name);
	
	cout << "�ּҴ�?  >> \n";
	getline(cin, addr);
	
	cout << "���̴�?  >> \n";
	getline(cin, age);
	
	cout << name << ", " << addr << ", " << age;
}

//10
#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cout << "���ڿ� �Է�>>";
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
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	for (k = 1; k <= n; k++) {
		sum += k;
	}

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.";
	return 0;
}

//12
#include <iostream>
using namespace std;
int sum(int a, int b);

int main() {
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�.\n";
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
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	int n = 0;
	while (n != 4) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		cin >> n;

		switch (n)
		{
			int howMany;
		case 1:
			cout << "���κ�?";
			cin >> howMany;
			cout << "«�� " << howMany << "�κ� ���Խ��ϴ�.\n";
			break;
		case 2:
			cout << "���κ�?";
			cin >> howMany;
			cout << "¥�� " << howMany << "�κ� ���Խ��ϴ�.\n";
			break;
		case 3:
			cout << "���κ�?";
			cin >> howMany;
			cout << "������ " << howMany << "�κ� ���Խ��ϴ�.\n";
			break;
		case 4:
			cout << "���� ������ �������ϴ�.\n";
			break;
		default:
			cout << "�ٽ� �ֹ��ϼ���!!.\n";
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
	cout << "���������� 2000��, ���ɸ�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

	while (earnMoney <= 20000) {
		cout << "�ֹ�>> ";
		cin >> order >> num;
		int tmpMoney;
		if (order == "����������") {
			tmpMoney = 2000 * num;
		}
		else if (order == "�Ƹ޸�ī��") {
			tmpMoney = 2300 * num;
		}
		else if (order == "īǪġ��") {
			tmpMoney = 2500 * num;
		}
		earnMoney += tmpMoney;
		cout << tmpMoney << "���Դϴ�. ���ְ� �弼��\n";
	}
	cout << "���� " << earnMoney << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~\n";
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
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�. \n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�. \n";

	int count, total = 0;
	char input[10000];

	cin.getline(input, 10000, ';');

	for (int i = 0; i <= strlen(input); i++) {
		if (isalpha(input[i]) != 0) {
			input[i] = tolower(input[i]);
			total++;
		}
	}
	cout << "�� ���ĺ� �� " << total << "\n\n";

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
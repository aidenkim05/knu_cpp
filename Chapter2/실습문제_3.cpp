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

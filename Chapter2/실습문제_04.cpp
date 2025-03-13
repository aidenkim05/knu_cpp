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

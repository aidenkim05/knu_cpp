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

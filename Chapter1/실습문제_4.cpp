#include<iostream>
int n = 1;
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= n; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
		n++;
	}
	return 0;
}

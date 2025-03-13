//실습 문제 2단원
//1
/*
#include<iostream>
int main() {
	std::cout << "My name is Mike.\n";
	return 0;
}

//2
#include<iostream>
int main() {
	std::cout << "컴퓨터공학부\n";
	std::cout << "21세\n";
	std::cout << "대통령\n";
	return 0;
}

//3
#include<iostream>
int main() {
	std::cout << "1부터 10까지 더한 결과는 " << 55 << " 입니다.";
	return 0;
}

//4
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

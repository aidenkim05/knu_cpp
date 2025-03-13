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

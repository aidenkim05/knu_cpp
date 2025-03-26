//1��
/*
#include<iostream>
using namespace std;

class Tower {
public:
	Tower();
	Tower(int h);
	int Height;
	double getHeight();
};
double Tower::getHeight() {
	return Height;
}
Tower::Tower() {
	Height = 1;
}
Tower::Tower(int h) {
	Height = h;
}
int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout <<"���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}

//2��
#include <iostream>
#include <string>

using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	Date(int year, int month, int day);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(string date)
{
	int ind;

	this->year = stoi(date);

	ind = date.find('/');
	this->month = stoi(date.substr(ind + 1));

	ind = date.find('/', ind + 1);
	this->day = stoi(date.substr(ind + 1));
}
void Date::show()
{
	cout << year << "��" << month << "��" << day << "��" << endl;
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}

//3��
#include <iostream>
#include <string>

using namespace std;

class Account {
public:
	string name;
	int id;
	int balance;
	Account(string name, int id, int balance);
	void deposit(int money);
	int withdraw(int money);
	int inquiry();
	string getOwner();
};

Account::Account(string name, int id, int balance)
{
	this->name = name;
	this->id = id;
	this->balance = balance;
}
void Account::deposit(int money)
{
	balance += money;
}
int Account::withdraw(int money)
{
	balance -= money;
	return balance;
}
int Account::inquiry()
{
	return balance;
}
string Account::getOwner()
{
	return name;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	return 0;
}

//4��
#include <iostream>
#include <string>

using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugerCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar)
{
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}
void CoffeeMachine::drinkEspresso()
{
	coffee = coffee - 1;
	water = water - 1;
}
void CoffeeMachine::drinkAmericano()
{
	coffee = coffee - 1;
	water = water - 2;
}
void CoffeeMachine::drinkSugerCoffee()
{
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
}
void CoffeeMachine::show()
{
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;
}
void CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugerCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}

//5��
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
	int seed = 0;
public:
	int next();
	int nextInRange(int start, int end);
};

int Random::next() {
	//srand((unsigned int)time(0));
	int n = rand();
	return n;
}
int Random::nextInRange(int start, int end) {
	//srand((unsigned int)time(0));
	int n = rand() % (end - start + 1) + start;
	return n;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}



//6��
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
	int seed = 0;
public:
	int next();
	int nextInRange(int start, int end);
};

int Random::next() {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 == 1);
	return n;
}
int Random::nextInRange(int start, int end) {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand() % (end - start + 1) + start;
	} while (n % 2 == 1);
	return n;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}

//7��
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class SelectableRandom {
	int seed = 0;
public:
	int nextEven();
	int nextOdd();
	int nextEvenInRange(int start, int end);
	int nextOddInRange(int start, int end);
};

int SelectableRandom::nextEven() {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 != 0);
	return n;
}
int SelectableRandom::nextOdd() {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 != 1);
	return n;
}
int SelectableRandom::nextEvenInRange(int start, int end) {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand() % (end - start + 1) + start;
	} while (n % 2 != 0);
	return n;
}
int SelectableRandom::nextOddInRange(int start, int end) {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand() % (end - start + 1) + start;
	} while (n % 2 != 1);
	return n;
}

int main() {
	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 9������ ���� Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextOddInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}

//8��
#include <iostream>
#include <string>

using namespace std;

class Integer {
public:
	int n;
	Integer(int n) {
		this->n = n;
	}
	Integer(string str) {
		this->n = stoi(str);
	}
	void set(int n) {
		this->n = n;
	}
	int get() {
		return n;
	}
	bool isEven() {
		if (n % 2 == 0) return true;
		else return false;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();

	return 0;
}

//9��
#include <iostream>
#include <string>

using namespace std;

class Oval {
private:
	int width;
	int height;
public:
	Oval() {
		width = height = 1;
	}
	Oval(int width, int height) {
		this->width = width;
		this->height = height;
	}
	~Oval() {
		cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
	}
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
	void set(int width, int height) {
		this->width = width;
		this->height = height;
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

	return 0;
}

//10��
#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a + b; }
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a - b; }
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a * b; }
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a / b; }
};


int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int p, q;
	string way;
	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> p >> q >> way;
		if (way == "+") {
			a.setValue(p, q);
			cout << a.calculate() << endl;
		}
		else if (way == "-") {
			s.setValue(p, q);
			cout << s.calculate() << endl;
		}
		else if (way == "*") {
			m.setValue(p, q);
			cout << m.calculate() << endl;
		}
		else if (way == "/") {
			d.setValue(p, q);
			cout << d.calculate() << endl;
		}
	}
}*/


/*
//12��
#ifndef RAM_H
#define RAM_H

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

#endif

#include <iostream>
#include <string>
#include "Ram.h"

using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) {
		mem[i] = 0;
	}
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}

#include "Ram.h"

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102������ �� = " << (int)ram.read(102) << endl;

	return 0;
}
*/
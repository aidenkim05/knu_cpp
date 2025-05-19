//1번
/*
#include <iostream>
using namespace std;

class Converter
{
protected:
	double ratio;
	virtual double convert(double src) = 0; // 순수 가상함수
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run()
	{
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다.";
		cout << getSourceString() << "을 입력하세요 >> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter
{
protected:
	double oneDollarWon{};
public:
	WonToDollar(double oneDollarWon) : Converter(ratio) { this->oneDollarWon = oneDollarWon; }
	string getSourceString() { return "원"; }
	string getDestString() { return "달러"; }
	double convert(double src) { return src / oneDollarWon; }
};

int main()
{
	WonToDollar wd(1010);
	wd.run();
}

//3번
#include <iostream>
using namespace std;

class LoopAdder
{
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAdder::read()
{
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요. >> ";
	cin >> x >> y;
}

void LoopAdder::write()
{
	cout << x << "에서 " << y << "까지의 합 = " << sum << "입니다. " << endl;
}

void LoopAdder::run()
{
	read();
	sum = calculate();
	write();
}

class ForLoopAdder : public LoopAdder
{
protected:
	string name;
public:
	ForLoopAdder(string name) : LoopAdder(name) { this->name = name; }
	int calculate();
};

int ForLoopAdder::calculate()
{
	int x = getX();
	int y = getY();
	int sum{};

	for (int i = x; i < y + 1; i++)
		sum += i;

	return sum;
}

int main()
{
	ForLoopAdder forLoop("For Loop");
	forLoop.run();
}

//5번
#include <iostream>
using namespace std;

class AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};

class ANDGate : public AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	bool operation()
	{
		if (x && y)
			return true;
		else
			return false;
	}
};

class ORGate : public AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	bool operation()
	{
		if (x || y)
			return true;
		else
			return false;
	}
};

class XORGate : public AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	bool operation()
	{
		if (x && y)
			return false;
		else if (!x && !y)
			return false;
		else if (x || y)
			return true;
		else
			return false;
	}
};

int main()
{
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
}
//7번
#include <iostream>
using namespace std;
#define PI 3.14;

class Shape
{
protected:
	string name;
	int width, height;
public:
	Shape(string n = " ", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; }
	string getName() { return name; }
};

class Oval : public Shape
{
protected:
	string name;
	int width, height;
public:
	Oval(string n = " ", int w = 0, int h = 0) : Shape(n, w, h) { name = n; width = w; height = h; }
	double getArea() { return width * height * PI; }
	string getName() { return name; }
};

class Rect : public Shape
{
protected:
	string name;
	int width, height;
public:
	Rect(string n = " ", int w = 0, int h = 0) : Shape(n, w, h) { name = n; width = w; height = h; }
	double getArea() { return width * height; }
	string getName() { return name; }
};

class Triangular : public Shape
{
protected:
	string name;
	int width, height;
public:
	Triangular(string n = " ", int w = 0, int h = 0) : Shape(n, w, h) { name = n; width = w; height = h; }
	double getArea() { return width * height / 2; }
	string getName() { return name; }
};

int main()
{
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;
	for (int i = 0; i < 3; i++)
		delete p[i];
}*/
//9번
#include <iostream>
using namespace std;

class Printer
{
protected:
	string model;
	string manufacturer;
	int printedCount;
	int avaliableCount;
public:
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkjetPrinter : public Printer
{
protected:
	int ink{ 10 };
public:
	InkjetPrinter() {
		model = "Officejet V40";
		manufacturer = "HP";
		avaliableCount = 5;
		show();
	}
	int avaliableInk()
	{
		return ink;
	}
	void print(int pages)
	{
		if (avaliableCount < pages || ink < pages)
		{
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			avaliableCount -= pages;
			ink -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << avaliableCount << ", 남은 잉크 " << avaliableInk() << endl;
	}
};

class LaserPrinter : public Printer
{
protected:
	int toner{ 20 };
public:
	LaserPrinter() {
		model = "SCX-6x45";
		manufacturer = "삼성전자";
		avaliableCount = 3;
		show();
	}
	int avaliableToner()
	{
		return toner;
	}
	void print(int pages)
	{
		if (avaliableCount < pages || toner < pages)
		{
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			avaliableCount -= pages;
			toner -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << avaliableCount << ", 남은 토너 " << avaliableToner() << endl;
	}
};

int main()
{
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	InkjetPrinter inkjet;
	LaserPrinter laser;
	int choice, count;
	char yORn;
	while (true)
	{
	reInput:
		cout << "프린터 (1: 잉크젯, 2: 레이저)와 매수 입력 >> ";
		cin >> choice >> count;
		if (choice == 1)
		{
			inkjet.print(count);
		}
		else if (choice == 2)
		{
			laser.print(count);
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reInput;
		}
		inkjet.show();
		laser.show();
	reyORn:
		cout << "계속 프린트 하시겠습니까? ( y / n ) >> ";
		cin >> yORn;
		if (yORn == 'y')
			continue;
		else if (yORn == 'n')
		{
			break;
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reyORn;
		}

	}
	return 0;
}
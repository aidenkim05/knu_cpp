//1��
/*
#include <iostream>
using namespace std;

class Converter
{
protected:
	double ratio;
	virtual double convert(double src) = 0; // ���� �����Լ�
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run()
	{
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�.";
		cout << getSourceString() << "�� �Է��ϼ��� >> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter
{
protected:
	double oneDollarWon{};
public:
	WonToDollar(double oneDollarWon) : Converter(ratio) { this->oneDollarWon = oneDollarWon; }
	string getSourceString() { return "��"; }
	string getDestString() { return "�޷�"; }
	double convert(double src) { return src / oneDollarWon; }
};

int main()
{
	WonToDollar wd(1010);
	wd.run();
}

//3��
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
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ���. >> ";
	cin >> x >> y;
}

void LoopAdder::write()
{
	cout << x << "���� " << y << "������ �� = " << sum << "�Դϴ�. " << endl;
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

//5��
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
//7��
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
	p[0] = new Oval("��붱", 10, 20);
	p[1] = new Rect("����", 30, 40);
	p[2] = new Triangular("�佺Ʈ", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << "���̴� " << p[i]->getArea() << endl;
	for (int i = 0; i < 3; i++)
		delete p[i];
}*/
//9��
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
			cout << "������ �����Ͽ� ����� �� �����ϴ�." << endl;
		}
		else
		{
			avaliableCount -= pages;
			ink -= pages;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
	}
	void show()
	{
		cout << "��ũ�� : " << model << ", " << manufacturer << ", ���� ���� " << avaliableCount << ", ���� ��ũ " << avaliableInk() << endl;
	}
};

class LaserPrinter : public Printer
{
protected:
	int toner{ 20 };
public:
	LaserPrinter() {
		model = "SCX-6x45";
		manufacturer = "�Ｚ����";
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
			cout << "������ �����Ͽ� ����� �� �����ϴ�." << endl;
		}
		else
		{
			avaliableCount -= pages;
			toner -= pages;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
	}
	void show()
	{
		cout << "��ũ�� : " << model << ", " << manufacturer << ", ���� ���� " << avaliableCount << ", ���� ��� " << avaliableToner() << endl;
	}
};

int main()
{
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	InkjetPrinter inkjet;
	LaserPrinter laser;
	int choice, count;
	char yORn;
	while (true)
	{
	reInput:
		cout << "������ (1: ��ũ��, 2: ������)�� �ż� �Է� >> ";
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
			cout << "�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���. " << endl;
			goto reInput;
		}
		inkjet.show();
		laser.show();
	reyORn:
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�? ( y / n ) >> ";
		cin >> yORn;
		if (yORn == 'y')
			continue;
		else if (yORn == 'n')
		{
			break;
		}
		else
		{
			cout << "�Է��� �߸��Ǿ����ϴ�. �ٽ� �Է����ּ���. " << endl;
			goto reyORn;
		}

	}
	return 0;
}
//1��
/*#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle
{
	int radius;
	string name;
public:
	NamedCircle(int radius, string name)
	{
		this->radius = radius;
		this->name = name;
	}
	void show()
	{
		cout << " �������� " << radius << "�� " << name;
	}
};

int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}


//3��
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : protected Point
{
	int x, y;
	string color;
public:
	ColorPoint(int x, int y, string color) : Point(x, y)
	{
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void setPoint(int x, int y)
	{
		this->x = x;
		this->y = y;
		move(this->x, this->y);
	}
	void setColor(string color)
	{
		this->color = color;
	}
	void show()
	{
		cout << color << "������ (" << getX() << ", " << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}
};

int main()
{
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}

//5��
#include <iostream>
using namespace std;

class BaseArray
{
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100)
	{
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : protected BaseArray
{
	int size, index = 0, pos = 0;
public:
	MyQueue(int size) : BaseArray(size)
	{
		this->size = size;
		for (int i = 0; i < size; i++)
			put(i, 0);
	}
	void enqueue(int n)
	{
		put(index, n);
		index++;
	}
	int capacity()
	{
		return getCapacity();
	}
	int length()
	{
		return index;
	}
	int dequeue()
	{
		int I = get(pos);
		put(pos, 0);
		pos++;
		index--;
		return I;
	}
};

int main()
{
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�. >> ";
	while (mQ.length() != 0)
	{
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}
//7��
#include <iostream>
using namespace std;

class BaseMemory
{
	char* mem;
protected:
	BaseMemory(int size)
	{
		mem = new char[size];
	}
	void burnMemory(char x[], int burn)
	{
		for (int i = 0; i < burn; i++)
			mem[i] = x[i];
	}
	char getMemory(int i)
	{
		return mem[i];
	}
	void setMemory(int i, char x)
	{
		mem[i] = x;
	}
};

class ROM : protected BaseMemory
{
	int RomSize, burn;
	char x[];
public:
	ROM(int size, char x[], int burn) : BaseMemory(size)
	{
		this->RomSize = size;
		this->burn = burn;
		burnMemory(x, burn);
	}
	char read(int i)
	{
		return getMemory(i);
	}
};

class RAM : protected BaseMemory
{
	int RamSize;
public:
	RAM(int size) : BaseMemory(size)
	{
		RamSize = size;
	}
	void write(int i, char x)
	{
		setMemory(i, x);
	}
	char read(int i)
	{
		return getMemory(i);
	}
};

int main()
{
	char x[5] = { 'h' , 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++)
		mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++)
		cout << mainMemory.read(i);
}*/
//9��
#include <iostream>
#include <string>
using namespace std;

class Seat {
	string name;
public:
	Seat(string name = "---") { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class Schedule {
	int seatSize;
	string time;
	Seat* seat;
public:
	Schedule(string time = "") {
		this->time = time;
		this->seatSize = 8;
		seat = new Seat[this->seatSize];
	}
	void setTime(string time) { this->time = time; }
	string getTime() { return time; }
	void book(int index, string name) { seat[index].setName(name); }
	void cancelBook(int index) { seat[index].setName("---"); }
	void show() {
		cout << time;
		for (int i = 0; i < seatSize; i++)
			cout << '\t' << seat[i].getName();
		cout << endl;
	}
};

class Console {
public:
	static int getMenu() {
		int select;
		cout << "����:1, ���:2, ����:3, ������:4 >> ";
		cin >> select;
		cin.ignore();
		return select;
	}
	static int getTime() {
		int select;
		cout << "07��:1, 12��:2, 17��:3 >> ";
		cin >> select;
		cin.ignore();
		return select - 1;
	}
	static int getSeatNum() {
		int select;
		cout << "�¼���ȣ >> "; cin >> select;
		cin.ignore();
		return select - 1;
	}
	static string getName() {
		string name;
		cout << "�̸� �Է� >> "; getline(cin, name);
		return name;
	}
};

class AirlineBook {
	Schedule* schedule;
	int scheduleSize;
public:
	AirlineBook() {
		this->scheduleSize = 3;
		this->schedule = new Schedule[this->scheduleSize];
		schedule[0].setTime("07��");
		schedule[1].setTime("12��");
		schedule[2].setTime("17��");
	}
	void book(int time, int index, string name) { schedule[time].book(index, name); }
	void cancel(int time, int index) { schedule[time].cancelBook(index); }
	void show(int time) { schedule[time].show(); }
};

class AirlineBookManager {
	AirlineBook* AB;
	int seatNum;
	string name;
	void book() {
		int time = Console::getTime();
		AB->show(time);
		seatNum = Console::getSeatNum();
		name = Console::getName();
		AB->book(time, seatNum, name);
	}
	void cancel() {
		int time = Console::getTime();
		AB->show(time);
		seatNum = Console::getSeatNum();
		name = Console::getName();
		AB->cancel(time, seatNum);
	}
	void show() {
		for (int i = 0; i < 3; i++)
			AB->show(i);
	}
public:
	AirlineBookManager() { AB = new AirlineBook; }
	void run() {
		cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. *****" << endl;
		int flag = true;
		while (flag) {
			switch (Console::getMenu()) {
			case 1:
				book();
				break;
			case 2:
				cancel();
				break;
			case 3:
				show();
				break;
			case 4:
				flag = false;
				break;
			default:
				cout << "�ٽ� �Է��ϼ���" << endl;
				break;
			}
			cout << endl;
		}
		cout << "���� �ý����� �����մϴ�." << endl;
	}
};

int main() {
	AirlineBookManager ABM;
	ABM.run();
}
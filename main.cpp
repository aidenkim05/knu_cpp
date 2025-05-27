/*
//1��
#include <iostream>
#include <string>
using namespace std;

template <class T>
T biggest(T x[], int y) {
	T biggest = x[0];
	for (int i = 0; i < y; i++) {
		if (biggest < x[i])
			biggest = x[i];
	}
	return biggest;
}

int main() {
	int a[] = { 1, 10, 100, 5, 4 };
	char b[] = { 'a', 'x', 't', 'u', 'o' };
	cout << biggest(a, 5) << endl;
	cout << biggest(b, 5) << endl;
}

//3��
#include <iostream>
#include <string>
using namespace std;

template <class T>
void reverseArray(T x[], int y) {
	for (int i = 0; i < y / 2; i++) {
		T tmp = x[i];
		x[i] = x[y - i - 1];
		x[y - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}
//5��
#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* p = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++)
		p[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		p[i + sizea] = b[i];

	return p;
}

int main()
{
	int xInt[] = { 1, 2, 3, 4, 5 }; // ������ �迭�� ���
	int yInt[] = { 6, 7, 8, 9, 10 };

	int xSize = size(xInt);
	int ySize = size(yInt);
	int sizeT = xSize + ySize;
	auto* p = concat(xInt, xSize, yInt, ySize);

	for (int i = 0; i < sizeT; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete[] p;

	double xDouble[] = { 1.1, 2.2, 3.3, 4.4, 5.5 }; // �Ǽ��� �迭�� ���
	double yDouble[] = { 6.6, 7.7, 8.8, 9.9, 10.1 };

	xSize = size(xDouble);
	ySize = size(yDouble);
	sizeT = xSize + ySize;
	auto* q = concat(xDouble, xSize, yDouble, ySize);

	for (int i = 0; i < sizeT; i++)
	{
		cout << q[i] << " ";
	}
	cout << endl;
	delete[] q;
}

//7��
// <��ü ��ü�� ���ø� �Լ��� ���Ϸ��� �ϰ��ֱ� �����̴�.>
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T>
T bigger(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle.getRadius(), pizza.getRadius());
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}
//9��
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int num;
	double sum{};
	while (true)
	{
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >> ";
		cin >> num;
		if (num == 0)
			return 0;
		v.push_back(num);

		for (int i = 0; i < size(v); i++) {
			cout << v[i] << " ";
			sum += v[i];
		}
		cout << endl;
		double regular = sum / size(v);
		cout << "��� = " << regular << endl;
		sum = 0;
	}
}

//11��
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
protected:
	string name;
	int year;
	string writer;
public:
	Book(int year, string name, string writer)
	{
		this->year = year;
		this->name = name;
		this->writer = writer;
	}
	string getName()
	{
		return name;
	}
	string getWriter()
	{
		return writer;
	}
	int getYear()
	{
		return year;
	}
};

int main() {
	vector<Book> bv;
	string name;
	string writer;
	int year;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �����մϴ�. " << endl;
	while (true)
	{
		cout << "�⵵ >> ";
		cin >> year;
		if (year == -1) {
			cout << "�� �԰�� å�� " << size(bv) << "�Դϴ�. " << endl;
			break;
		}
		cin.ignore();
		cout << "å �̸� >> ";
		getline(cin, name);

		cout << "���� >> ";
		getline(cin, writer);

		Book book(year, name, writer);
		bv.push_back(book);
	}
	cin.ignore();
	cout << "�˻��ϰ��� �ϴ� å�� ���� �̸��� �Է��ϼ��� >> ";
	getline(cin, writer);
	for (int i = 0; i < size(bv); i++)
	{
		if (bv[i].getWriter() == writer)
			cout << bv[i].getYear() << ", " << bv[i].getName() << ", " << bv[i].getWriter() << endl;
	}
	cout << "�˻��ϰ��� �ϴ� å�� �Ⱓ ������ �Է��ϼ��� >> ";
	cin >> year;
	for (int i = 0; i < size(bv); i++)
	{
		if (bv[i].getYear() == year)
			cout << bv[i].getYear() << ", " << bv[i].getName() << ", " << bv[i].getWriter() << endl;
	}
}

//13��
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int choice, score;
	string name;
	map <string, int> dic;
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****" << endl;
	while (true) {
		cout << "�Է� : 1, ��ȸ : 2, ���� : 3 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "�̸��� ���� >> ";
			cin >> name >> score;
			dic[name] = score;
		}
		else if (choice == 2) {
			cout << "�̸� >> ";
			cin >> name;
			if (dic.find(name) == dic.end())
				cout << "ã�� �� �����ϴ�.";
			else
				cout << dic[name] << endl;
		}
		else if (choice == 3)
			break;
	}
	cout << "�����մϴ�..";
	return 0;
}

//15��
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

int main() {
	int choice, radius;
	string name;
	vector<Circle*> v;
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�. \n";
	while (true) {
		cout << "���� : 1, ���� : 2, ��κ��� : 3, ���� : 4 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
			cin >> radius >> name;
			v.push_back(new Circle(radius, name));
		}
		else if (choice == 2) {
			vector<Circle*>::iterator it;
			it = v.begin();
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
			cin >> name;
			for (int i = 0; i < size(v); i++)
			{
				if (v[i]->getName() == name) {
					it = v.erase(it);
					break;
				}
				it++;
			}
		}
		else if (choice == 3) {
			for (int i = 0; i < size(v); i++) {
				cout << v[i]->getName() << endl;
			}
			cout << endl;
		}
		else if (choice == 4) {
			break;
		}
	}
	cout << "���α׷��� �����մϴ�..";
	return 0;
}*/
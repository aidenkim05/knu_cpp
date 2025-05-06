//1번
/*
#include <iostream>
using namespace std;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title = " ", int price = 0, int pages = 0)
	{
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	Book& operator += (int x)
	{
		price = price + x;
		return *this;
	}

	Book& operator -= (int x)
	{
		price = price - x;
		return *this;
	}

	void show()
	{
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
	}
	string getTitle()
	{
		return title;
	}
};

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}


//1-2번
#include <iostream>
using namespace std;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title = " ", int price = 0, int pages = 0)
	{
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	friend Book& operator += (Book& op, int x);
	friend Book& operator -= (Book& op, int x);

	void show()
	{
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
	}
	string getTitle()
	{
		return title;
	}
};

Book& operator += (Book& op, int x)
{
	op.price = op.price + x;
	return op;
}

Book& operator -= (Book& op, int x)
{
	op.price = op.price - x;
	return op;
}

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}


//3번
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price, this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	bool operator ! () {
		if (this->price > 0)
			return false;
		return true;
	}
};

int main()
{
	Book book("벼룩시장", 0, 50);
	if (!book) cout << "공짜다" << endl;
}


//5번
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	Color operator + (Color op2) {
		Color tmp;
		tmp.red = this->red + op2.red;
		tmp.green = this->green + op2.green;
		tmp.blue = this->blue + op2.blue;
		return tmp;
	}
	bool operator == (Color op2) {
		if (this->red == op2.red && this->green == op2.green && this->blue == op2.blue)
			return true;
		return false;
	}
};

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}


//7-1번
#include <iostream>
using namespace std;

class Matrix {
	int matrix[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
	{
		matrix[0] = a, matrix[1] = b, matrix[2] = c, matrix[3] = d;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
		{
			cout << matrix[i] << ' ';
		}
		cout << "}" << endl;
	}
	void operator >> (int* arr);
	void operator << (int* arr);
};
void Matrix::operator >> (int* arr) {
	for (int i = 0; i < 4; i++) {
		arr[i] = this->matrix[i];
	}
}
void Matrix::operator << (int* arr) {
	for (int i = 0; i < 4; i++) {
		this->matrix[i] = arr[i];
	}
}

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}

//7-2번
#include <iostream>
using namespace std;

class Matrix {
	int matrix[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
	{
		matrix[0] = a, matrix[1] = b, matrix[2] = c, matrix[3] = d;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
		{
			cout << matrix[i] << ' ';
		}
		cout << "}" << endl;
	}
	friend void operator >> (Matrix op2, int* arr);
	friend void operator << (Matrix& op2, int* arr);
};
void operator >> (Matrix op2, int* arr) {
	for (int i = 0; i < 4; i++) {
		arr[i] = op2.matrix[i];
	}
}
void operator << (Matrix& op2, int* arr) {
	for (int i = 0; i < 4; i++) {
		op2.matrix[i] = arr[i];
	}
}

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}

//9번
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원" << endl; }
	friend Circle operator + (int a, Circle op1);
};

Circle operator+(int a, Circle op1) {
	Circle temp;
	temp.radius = a + op1.radius;
	return temp;
}

int main()
{
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}*/
//11번
#include <iostream>
#include <string>
using namespace std;

class Stack
{
	int size = 3, count = 2, i = 0;
	int* pArray = new int[size];
public:
	Stack()
	{
		for (int i = 0; i < size; i++)
			pArray[i] = 0;
	}

	~Stack()
	{
		delete[]pArray;
	}

	Stack& operator << (int x)
	{
		pArray[i] = x;
		i++;

		return *this;
	}

	void operator >> (int& x)
	{
		x = pArray[count];
		count--;
		size--;
	}

	bool operator ! ()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
};

int main()
{
	Stack stack;
	stack << 3 << 5 << 10;
	while (true)
	{
		if (!stack)
			break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}

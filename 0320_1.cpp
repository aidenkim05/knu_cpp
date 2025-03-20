//예제 3-1
/*#include <iostream>
using namespace std;
class Circle {
public:
	int radius;
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle donut;
	donut.radius = 1; 
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}

//예제 3-1 추가 문제
#include<iostream>
using namespace std;
class Circle {
public:
	int innerradius;
	int outterradius;
	double getinnerArea();
	double getoutterArea();
};
double Circle::getinnerArea() {
	return 3.14 * innerradius * innerradius;
}
double Circle::getoutterArea() {
	return 3.14 * outterradius * outterradius;
}

int main() {
	Circle inner_donut_two;
	inner_donut_two.innerradius = 1;
	double innerarea = inner_donut_two.getinnerArea();
	cout << "inner_donut_two 면적은 " << innerarea << endl;

	Circle outter_donut_two;
	outter_donut_two.outterradius = 10;
	double outterarea = outter_donut_two.getoutterArea();
	cout << "outter_donut_two 면적은 " << outterarea << endl;

	cout << "도넛의 면적은" << outterarea - innerarea << endl;

}

//예제 3-2
#include <iostream>
using namespace std;

class Rectangle {
public:
	int getArea();
	int width;
	int height;
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}

//예제 3-2 추가 문제
#include <iostream>
using namespace std;

class Rectangle {
public:
	int getArea();
	int width;
	int height;
	int thickness;
};

int Rectangle::getArea() {
	return width * height * thickness;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 2;
	cout << "사각형의 체적은 " << rect.getArea() << endl;
}

//예제 3-3
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 매개 변수 없는 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
};
Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;
	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}

//예제 3-6
#include <iostream> 
using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};
Rectangle::Rectangle() {
	width = height = 1;
}
Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}
Rectangle::Rectangle(int length) {
	width = height = length;
}
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}*/


//실습문제
//1번
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
	cout << myTower.getHeight() << "미터" << endl;
	cout << seoulTower.getHeight() << "미터" << endl;
}
*/
//2번
#include<iostream>
#include<string>
using namespace std;

class Date {
public:

};
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}


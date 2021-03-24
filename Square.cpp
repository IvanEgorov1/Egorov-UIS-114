﻿#include <iostream>
#include "Square.h"

using namespace std;


square::square() {
	cout << "Введите координату левого верхнего угла по x: ";
	cin >> x;
	cout << "Введите координату левого верхнего угла по y: ";
	cin >> y;
	cout << "Введите длину стороны квадрата: ";
	cin >> length;
}

void square::output() {
	cout << "Координаты левого верхнего угла раны " << x << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Координаты правого верхнего угла раны " << x + length << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Координаты левого нижнего угла раны " << x << ", " << y - length << " по x и y соответсвенно." << endl;
	cout << "Координаты правого нижнего угла раны " << x + length << ", " << y - length << " по x и y соответсвенно." << endl;
}

void square::changeLeng() {
	cout << "Введите новую сторону квадрат: ";
	cin >> length;
	cout << "Сторона квадрат равна " << length << endl;

}

void square::changeCoord() {
	cout << "Введите новую координату левой верхней точки по x: ";
	cin >> x;
	cout << "Введите новую координату левой верхней точки по y: ";
	cin >> y;
	cout << "Новые координаты левого верхнего угла раны " << x << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Новые координаты правого верхнего угла раны " << x + length << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Новые координаты левого нижнего угла раны " << x << ", " << y - length << " по x и y соответсвенно." << endl;
	cout << "Новые координаты правого нижнего угла раны " << x + length << ", " << y - length << " по x и y соответсвенно." << endl;
}

void square::perimeter() {
	cout << "Периметер нашего квадрата равен: " << length * 4 << endl;
}

void square::area() {
	cout << "Площадь квадрата равна " << length * length << endl;
}

void square::rotation() {
	cout << "Мы поворачиваем квадрат относительно левой верхней точки" << endl;
	cout << "Это координаты углов до поворота" << endl;
	cout << "Координаты левого верхнего угла раны " << x << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Координаты правого верхнего угла раны " << x + length << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Координаты левого нижнего угла раны " << x << ", " << y - length << " по x и y соответсвенно." << endl;
	cout << "Координаты правого нижнего угла раны " << x + length << ", " << y - length << " по x и y соответсвенно." << endl;

	cout << endl << "Это координаты углов после поворота" << endl;
	cout << "Координаты левого верхнего угла раны " << x << ", " << y + length << " по x и y соответсвенно." << endl;
	cout << "Координаты правого верхнего угла раны " << x + length << ", " << y + length << " по x и y соответсвенно." << endl;
	cout << "Координаты левого нижнего угла раны " << x << ", " << y << " по x и y соответсвенно." << endl;
	cout << "Координаты правого нижнего угла раны " << x + length << ", " << y << " по x и y соответсвенно." << endl;
}
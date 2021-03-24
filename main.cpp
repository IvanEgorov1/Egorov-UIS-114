#include <iostream>
#include "Square.h"

using namespace std;

int main() {
	square s;

	s.changeLeng(); //изменяем длину 
	s.changeCoord(); //изменяем координаты
	s.perimeter(); //выводим периметр
	s.rotation(); //выводим поворот
	s.area(); //выводим площадь
	s.output(); //выводим координаты

}
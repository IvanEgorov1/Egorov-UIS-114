#pragma once
class square {
private:
    int x; //координата х
    int y; //координата y 
    int length; //длина
public:

    square(); //конструктор 

    void output(); //вывод на экран

    void changeLeng(); //изменение длины

    void changeCoord(); //изменение координат

    void perimeter();// поиск периметра

    void area(); // поиск площади

    void rotation(); // поворот квадрата 
};
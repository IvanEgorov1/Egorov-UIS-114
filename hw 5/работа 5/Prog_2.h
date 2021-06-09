#include <iostream>
 
using namespace std;
 
 
class DivisionByZero_1 {
private:
    string message;
public:
    DivisionByZero_1();
};
 
class DivisionByZero_2 : public logic_error {
public:
    DivisionByZero_2();
};
 
class DivisionByZero_3 {};
 
 
class Complex {
private:
    double re;
    double im;
public:
    Complex(double re, double im);
 
    Complex First_Division(const Complex& other) const noexcept;
 
    Complex Second_Division(const Complex& other) const;
 
    Complex Third_Division(const Complex& other) const;
 
    Complex Fourth_Division(const Complex& other) const;
 
    Complex Fifth_Division(const Complex& other) const;
 
    Complex Six_Division(const Complex& other) const;
 
    friend ostream& operator<<(ostream& os, const Complex& complex);
};
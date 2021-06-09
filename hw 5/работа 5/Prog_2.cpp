#include "Prog_2.h"
 
DivisionByZero_1::DivisionByZero_1() : message("Division by zero_1") {}
 
DivisionByZero_2::DivisionByZero_2() : logic_error("Division by zero_2") {}
 
Complex::Complex(double re, double im) : re(re), im(im) {}
 
Complex Complex::First_Division(const Complex& other) const noexcept {
    return Complex((re * other.re + im * other.im) / (other.re * other.re + other.im * other.im),
                   (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im));
}
 
Complex Complex::Second_Division(const Complex& other) const {
    if (other.re == double(0) && other.im == double(0)) {
        throw 0;
    }
    return Complex((re * other.re + im * other.im) / (other.re * other.re + other.im * other.im),
                   (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im));
}
 
Complex Complex::Third_Division(const Complex& other) const {
    if (other.re == double(0) && other.im == double(0)) {
        throw std::runtime_error("Division by zero");
    }
    return Complex((re * other.re + im * other.im) / (other.re * other.re + other.im * other.im),
                   (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im));
}
 
Complex Complex::Fourth_Division(const Complex& other) const {
    if (other.re == double(0) && other.im == double(0)) {
        throw DivisionByZero_1();
    }
    return Complex((re * other.re + im * other.im) / (other.re * other.re + other.im * other.im),
                   (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im));
}
 
Complex Complex::Fifth_Division(const Complex& other) const {
    if (other.re == double(0) && other.im == double(0)) {
        throw DivisionByZero_2();
    }
    return Complex((re * other.re + im * other.im) / (other.re * other.re + other.im * other.im),
                   (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im));
}
 
Complex Complex::Six_Division(const Complex& other) const {
    if (other.re == double(0) && other.im == double(0)) {
        throw DivisionByZero_3();
    }
    return Complex((re * other.re + im * other.im) / (other.re * other.re + other.im * other.im),
                   (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im));
}
 
ostream& operator<<(ostream& os, const Complex& complex) {
    os << '(' << complex.re << ", " << complex.im << ')' << endl;
    return os;
}
#include "Prog_2.h"
 
int main() {
    double re_1, im_1, re_2, im_2;
    cin >> re_1 >> im_1 >> re_2 >> im_2;
    Complex A(re_1, im_1);
    Complex B(re_2, im_2);
 
    A.First_Division(B);
 
    try {
        cout << A.Second_Division(B);
    } catch (int) {
        cout << "Error: Second_Division by zero" << endl;
    }
 
    try {
        cout << A.Fourth_Division(B);
    } catch (const DivisionByZero_1&) {
        cout << "Error: Fourth Division by zero" << endl;
    }
 
    try {
        cout << A.Fifth_Division(B);
    } catch (const DivisionByZero_2&) {
        cout << "Error: Fifth Division by zero" << endl;
    }
 
    try {
        cout << A.Six_Division(B);
    } catch (const DivisionByZero_3&) {
        cout << "Error: Six Division by zero" << endl;
    }
 
    try {
        cout << A.Third_Division(B);
    } catch (const std::runtime_error&) {
        cout << "Error: Third Division by zero" << endl;
    }
 
    return 0;
}

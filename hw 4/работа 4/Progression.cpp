#include "Progression.h"
 
Progression :: Progression (double a0, double delta): first_element (a0), delta (дельта) {}
 
double Progression :: GetIndexElement (целое число) const {}
 
double Progression :: GetSumBeforeNumber (целое число) const {}
 
 
ArithmeticProgression :: ArithmeticProgression (двойное a0, двойное дельта): Progression (a0, delta) {}
 
double ArithmeticProgression :: GetIndexElement (целое число) const {
    двойной ответ = первый_элемент;
    for (int i = 0; i <number - 1; ++ i) {
        ответ + = дельта;
    }
    ответный ответ;
}
 
double ArithmeticProgression :: GetSumBeforeNumber (целое число) const {
    двойной ответ = первый_элемент;
    for (int i = 2; i <= number; ++ i) {
        answer + = GetIndexElement (i);
    }
    ответный ответ;
}
 
 
GeometricProgression :: GeometricProgression (double start_element, double delta): Progression (start_element, delta) {}
 
double GeometricProgression :: GetIndexElement (int number) const {
    двойной ответ = первый_элемент;
    for (int i = 0; i <number - 1; ++ i) {
        ответ * = дельта;
    }
    ответный ответ;
}
 
double GeometricProgression :: GetSumBeforeNumber (целое число) const {
    двойной ответ = первый_элемент;
    for (int i = 2; i <= number; ++ i) {
        answer + = GetIndexElement (i);
    }
    ответный ответ;
}

#include <iostream>
 
используя пространство имен std;
 
 
class Progression {
защищено:
    двойной first_element;
    двойная дельта;
общественность:
    Прогрессия (двойная а0, двойная дельта);
    double GetIndexElement (целое число) const;
    double GetSumBeforeNumber (целое число) const;
};
 
class ArithmeticProgression: public Progression {
общественность:
    ArithmeticProgression (двойное a0, двойное дельта);
 
    double GetIndexElement (целое число) const;
 
    double GetSumBeforeNumber (целое число) const;
 
};
 
class GeometricProgression: public Progression {
общественность:
    GeometricProgression (двойной start_element, двойная дельта);
 
    double GetIndexElement (целое число) const;
 
    double GetSumBeforeNumber (целое число) const;
};
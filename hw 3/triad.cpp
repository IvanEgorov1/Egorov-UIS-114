#include <iostream>
 
используя пространство имен std;
 
class Triad {
  защищено:
    int a;
    int b;
    int c;
  общественность:
 
    Триада ();
 
    Триада (const int & a, const int & b, const int & c);
 
    int GetA () const;
 
    int GetB () const;
 
    int GetC () const;
 
    void SetA (const int & val);
 
    недействительным SetB (const int & val);
 
    void SetC (const int & val);
 
    логический оператор <(const Triad и другое) const;
 
    void Print () const;
};
 
class Date: public Triad {
  общественность:
    Дата();
    Дата (const int & val1, const int & val2, const int & val3);
 
    bool operator == (const Date & other) const;
 
    логический оператор> (const Date и другое) const;
 
    bool operator! = (const Date & other) const;
 
};
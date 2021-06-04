#include "Program.h"
 
Триада :: Триада (): a (0), b (0), c (0) {}
 
Triad :: Triad (const int & a, const int & b, const int & c): a (a), b (b), c (c) {}
 
int Triad :: GetA () const {
    вернуть;
}
 
int Triad :: GetB () const {
    return b;
}
 
int Triad :: GetC () const {
    return c;
}
 
void Triad :: SetA (const int & val) {
    if (val <0) {
        cout << "ошибка" << endl;
    } еще {
        a = val;
    }
}
 
void Triad :: SetB (const int & val) {
    if (val <0) {
        cout << "ошибка" << endl;
    } еще {
        b = val;
    }
}
 
void Triad :: SetC (const int & val) {
    if (val <0) {
        cout << "ошибка" << endl;
    } еще {
        c = val;
    }
}
 
bool Triad :: operator <(const Triad & other) const {
    if (a <= other.a) {
        if (a == other.a) {
            if (b <= other.b) {
                if (b == other.b) {
                    if (c <other.c) {
                        вернуть истину;
                    }
                    еще {
                        вернуть ложь;
                    }
                }
                еще {
                    вернуть истину;
                }
            }
            еще {
                вернуть ложь;
            }
        }
        еще {
            вернуть истину;
        }
    }
    еще {
        вернуть ложь;
    }
}
 
void Triad :: Print () const {
    cout << a << '' << b << '' << c << endl;
}
 
Date :: Date (): Triad () {}
 
Date :: Date (const int & val1, const int & val2, const int & val3): Triad () {
    if (val1 <0 || val2 <0 || val3 <0) {
        cout << "ошибка" << endl;
        возвращаться;
    }
    а = знач1;
    b = val2;
    c = val3;
}
 
bool Date :: operator == (const Date и другое) const {
    return! (* это <другое) &&! (другое <* это);
}
 
bool Date :: operator> (const Date и другое) const {
    return! (* это <другое) &&! (другое == * это);
}
 
bool Date :: operator! = (const Date и другое) const {
    return! (* это == другое);
}
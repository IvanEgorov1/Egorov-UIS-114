#include "Program.h"
 
int main () {
    Дата date_1 (2020, 12, 3);
    Дата date_2 (2020, 12, 4);
 
    cout << date_2.GetA () << endl;
    cout << date_2.GetB () << endl;
    cout << date_2.GetC () << endl;
 
    date_1.Print ();
    date_2.Print ();
 
    Дата date_3;
    date_3.SetA (1980);
    date_3.SetB (10);
    date_3.SetC (16);
 
    cout << (date_3 <date_2) << endl;
    cout << (date_3 == date_1) << endl;
    cout << (date_1> date_2) << endl;
    cout << (date_2! = date_3) << endl;
 
    возврат 0;
}
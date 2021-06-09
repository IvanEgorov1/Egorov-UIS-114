#include "Progression.h"
 
int main () {
    setlocale (LC_ALL, «русский»);
    двойной first_element_1, delta_1;
    cout << "Введите первый элемент арифметической прогрессии и параметр delta" << endl;
    cin >> first_element_1 >> delta_1;
    двойной первый_элемент_2, дельта_2;
    cout << "Введите первый элемент геометрической прогрессии и параметр дельта" << endl;
    cin >> first_element_2 >> delta_2;
 
    cout << "Выберите, с какой прогрессией хотите работать:" << endl;
    cout << "0 - Арифметическая" << endl;
    cout << "1 - Геометрическая" << endl;
 
    int выбор;
    cin >> выбор;
 
    if (choice) {
        GeometricProgression geometryProgression (first_element_2, delta_2);
        cout << "Введите номер элемента" << endl;
        int число;
        cin >> число;
        cout << "Элемент под данным номером:";
        cout << geometryProgression.GetIndexElement (число) << endl;
        cout << "Сумма элементов до элмента с этим номером включительно:";
        cout << geometryProgression.GetSumBeforeNumber (число);
    } еще {
        ArithmeticProgression arithmeticProgression (first_element_1, delta_1);
        cout << "Введите номер элемента" << endl;
        int число;
        cin >> число;
        cout << "Элемент под данным номером:";
        cout << arithmeticProgression.GetIndexElement (число) << endl;
        cout << "Сумма элементов до элемента с этим номером включительно:";
        cout << arithmeticProgression.GetSumBeforeNumber (число) << endl;
    }
 
    возврат 0;
}
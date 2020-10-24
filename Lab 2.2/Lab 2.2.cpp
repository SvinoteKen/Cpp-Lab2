#include <iostream>
#include <string>
#include <exception>
#include "Fraction.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    Fraction a, b,c;
    char q;
    bool next = true;
    while (next)
    {
        try
        {
            cout << "Введите дробь 1" << std::endl;
            cin >> a;

            cout << "Введите операцию: '+' '-' '*' '/'" << std::endl;
            cin >> q;

            cout << "Введите дробь 2" << std::endl;
            cin >> b;
        }
        catch (const exception& ex)
        {
            cerr << "Деление на 0" << endl;
        }

        switch (q)
        {
        case '+':
            c = a + b;
            cout << "результат сложения дроби " << a << ", с дробью " << b << " ровняется " << c << endl;
            
            break;

        case '-':
            c = a - b;
            cout << "результат вычитания из дроби " << a << ", дроби " << b << " ровняется " << c << endl;
            break;

        case '*':
            c = a * b;
            cout << "результат умножения дроби " << a << ", на дробь " << b << " ровняется " << c << endl;
            break;

        case '/':
            c = a / b;
            cout << "результат деления дроби " << a << ", на дробь " << b << " ровняется " << c << endl;
            break;
        default:
            next = false;
        }
        cout << "Посмотреть количество созданных дробей? (y / n)" << endl;
        cin >> q;
        if (q == 'y') {
            cout << "Количество всех созданных экземпляров дробей на данный момент:" << Fraction::getCount() << endl;
        }
        cout << "Вы хотите произвести еще одну операцию? (y / n)" << endl;
        cin >> q;
        if (q == 'n') {
            next = false;
        }
    }
    return 0;
}


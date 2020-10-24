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
            cout << "������� ����� 1" << std::endl;
            cin >> a;

            cout << "������� ��������: '+' '-' '*' '/'" << std::endl;
            cin >> q;

            cout << "������� ����� 2" << std::endl;
            cin >> b;
        }
        catch (const exception& ex)
        {
            cerr << "������� �� 0" << endl;
        }

        switch (q)
        {
        case '+':
            c = a + b;
            cout << "��������� �������� ����� " << a << ", � ������ " << b << " ��������� " << c << endl;
            
            break;

        case '-':
            c = a - b;
            cout << "��������� ��������� �� ����� " << a << ", ����� " << b << " ��������� " << c << endl;
            break;

        case '*':
            c = a * b;
            cout << "��������� ��������� ����� " << a << ", �� ����� " << b << " ��������� " << c << endl;
            break;

        case '/':
            c = a / b;
            cout << "��������� ������� ����� " << a << ", �� ����� " << b << " ��������� " << c << endl;
            break;
        default:
            next = false;
        }
        cout << "���������� ���������� ��������� ������? (y / n)" << endl;
        cin >> q;
        if (q == 'y') {
            cout << "���������� ���� ��������� ����������� ������ �� ������ ������:" << Fraction::getCount() << endl;
        }
        cout << "�� ������ ���������� ��� ���� ��������? (y / n)" << endl;
        cin >> q;
        if (q == 'n') {
            next = false;
        }
    }
    return 0;
}


#include <iostream>
#include <string>
#include "Air.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    Air c1(2017,11,"Cool",24,"FTXZ50N","DAIKIN");
    Air c2(2020, 12, "Fan", 20, "AR 18 RSFP", "SAMSUNG");
    Air c3;
    c3.setFirm("LG");
    c3.setMode("Heat");
    c3.setModel("AP09RT");
    c3.setTemperature(14);
    c3.setWeight(10);
    c3.setYear(2018);
    cout << "���������� � ������ ������������:"<<endl;
    c1.printInfo();
    cout << "���������� � ������ ������������:" << endl;
    c2.printInfo();
    cout << "���������� � ������� ������������:" << endl;
    c3.printInfo();
    cout << "�������� ������� ������������" << endl;
    string m;int t;
    for (int i = 0;i < 3;i++)
    {
        cout << "���������� �����:" << endl;
        cin >> m;
        c1.setMode(m);
        if (m == "Cool")
        {
            cout << "���������� �����������:" << endl;
            cin >> t;
        }
        else
        {
            t = 0;
        }
        c1.setTemperature(t);
    }
    c1.AVG();

    cout << "�������� ������� ������������" << endl;
    for (int i = 0;i < 3;i++)
    {
        cout << "���������� �����:" << endl;
        cin >> m;
        c2.setMode(m);
        if (m == "Cool")
        {
            cout << "���������� �����������:" << endl;
            cin >> t;
        }
        else
        {
            t = 0;
        }
        c2.setTemperature(t);
    }
    c2.AVG();

    cout << "�������� �������� ������������" << endl;
    for (int i = 0;i < 3;i++)
    {
        cout << "���������� �����:" << endl;
        cin >> m;
        c3.setMode(m);
        if (m == "Cool")
        {
            cout << "���������� �����������:" << endl;
            cin >> t;
        }
        else
        {
            t = 0;
        }
        c3.setTemperature(t);
    }
    c3.AVG();
}



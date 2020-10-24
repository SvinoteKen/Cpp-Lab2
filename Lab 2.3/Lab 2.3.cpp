#include <iostream>
#include <string>
#include "Air.h"
using namespace std;
int main()
{
    //Написать собственный класс, в соответствии с вариантом. Продемонстрировать в коде
    //инкапсуляцию данных, применение конструкторов без параметров и с параметрами
    //для инициализации данных. Класс должен содержать метод serialize() для
    //сохранения данных класса в файл и метод deserialize() для чтения данных класса
    //из файла по умолчанию в текущей директории, а также перегруженные методы
    //serialize(const std::string& filename) и deserialize(const std::string&
    //filename) для работы с файлом с указанным в параметре именем.

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
    cout << "Èíôîðìàöèÿ î ïåðâîì êîíäèöèîíåðå:"<<endl;
    c1.printInfo();
    cout << "Èíôîðìàöèÿ î âòîðîì êîíäèöèîíåðå:" << endl;
    c2.printInfo();
    cout << "Èíôîðìàöèÿ î òðåòüåì êîíäèöèîíåðå:" << endl;
    c3.printInfo();
    cout << "Ïðîâåðêà ïåðâîãî êîíäèöèîíåðà" << endl;
    string m;int t;
    for (int i = 0;i < 3;i++)
    {
        cout << "Óñòàíîâèòå ðåæèì:" << endl;
        cin >> m;
        c1.setMode(m);
        if (m == "Cool")
        {
            cout << "Óñòàíîâèòå òåìïåðàòóðó:" << endl;
            cin >> t;
        }
        else
        {
            t = 0;
        }
        c1.setTemperature(t);
    }
    c1.AVG();

    cout << "Ïðîâåðêà âòîðîãî êîíäèöèîíåðà" << endl;
    for (int i = 0;i < 3;i++)
    {
        cout << "Óñòàíîâèòå ðåæèì:" << endl;
        cin >> m;
        c2.setMode(m);
        if (m == "Cool")
        {
            cout << "Óñòàíîâèòå òåìïåðàòóðó:" << endl;
            cin >> t;
        }
        else
        {
            t = 0;
        }
        c2.setTemperature(t);
    }
    c2.AVG();

    cout << "Ïðîâåðêà òðåòüåãî êîíäèöèîíåðà" << endl;
    for (int i = 0;i < 3;i++)
    {
        cout << "Óñòàíîâèòå ðåæèì:" << endl;
        cin >> m;
        c3.setMode(m);
        if (m == "Cool")
        {
            cout << "Óñòàíîâèòå òåìïåðàòóðó:" << endl;
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



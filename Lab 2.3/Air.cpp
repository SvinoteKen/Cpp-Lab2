#include "Air.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Air::Air()
{
    model_ = "unknown";
    firm_ = "unknown";
    mode_ = "auto";
    year_ = 2017;
    w = 10;
    t = 0;
    mean = NULL;
    c = NULL;
}

Air::Air(int year, int weight, string mode, int temperature,const string model, const string firm) :year_(year),w(weight),mode_(mode),t(temperature),model_(model), firm_(firm),mean(0),c(0)
{
    if (mode_ != "Cool")
    {
        t = 0;
    }
    if (t != 0) 
    { 
        mean += t;
        ++c;
    }
    
}

void Air::setModel(const string& model)
{
    model_ = model;
}

void Air::setFirm(const string& firm)
{
    firm_ = firm;
}
void Air::setYear(const int year)
{
    year_ = year;
}
void Air::setWeight(const int weight)
{
    w = weight;
}
void Air::setMode(const string& mode)
{
    mode_ = mode;
}
void Air::setTemperature(const int temperature)
{
    t = temperature;
    if (t != 0) 
    {
        mean += t;
        ++c;
    }
}



string Air::getModel() const
{
    return model_;
}

string Air::getFirm() const
{
    return firm_;
}
int Air::getYear() const
{
    return year_;
}
int Air::getWeight() const
{
    return w;
}
string Air::getMode() const
{
    return mode_;
}
int Air::getTemperature() const
{
    return t;
}
void Air::AVG() const
{
    try
    {
        if (c == 0) 
        { 
            throw exception(); 
        }
        cout <<"Среднее значение температуры: "<<double(mean / c) <<"Последний режим: "<<mode_<< endl;
    }
    catch (exception& e)
    {
        cout << 0 << endl;
    }
}
void Air::printInfo() const
{
    cout <<"Модель:"<< model_<<"\n" <<"Фирма:"<< firm_ <<"\n" <<"Год:"<< year_<<"\n" << "Вес:"<< w <<"\n" << "Режим:"<<mode_<<"\n" <<"Температура:"<<t <<"\n" << endl;
}
void Air::serialize() const 
{
    string path = "D:\lab.txt";
    ofstream fout;
    fout.open(path, ofstream::trunc);
    if (fout.is_open()) 
    {
        fout.write((char*)this,sizeof(Air));
    }
    fout.close();
}
void Air::serialize(const string& filename) const
{
    ofstream fout;
    fout.open(filename, ofstream::trunc);
    if (fout.is_open()) 
    {
        fout.write((char*)this, sizeof(Air));
    }
    fout.close();
}
void Air::deserialize()
{
    string path = "D:\lab.txt";
    ifstream fin;
    fin.open(path);
    if (fin.is_open())
    {
        fin.read((char*)this, sizeof(Air));
    }
    fin.close();
}
void Air::deserialize(const string& filename)
{
    ifstream fin;
    fin.open(filename);
    if (fin.is_open())
    {
        fin.read((char*)this, sizeof(Air));
    }
    fin.close();
}

#pragma once
#include <iostream>
#include <string>
#include <exception>
using namespace std;
static int k=0;
class Fraction
{
private:
    int x;
    int y;
    int NOD(int x, int y)
    {
        if (y == 0) return x;
        return NOD(y, x % y);
    }
    
public:
    static int getCount() { return k; };
    static void setCount(int value) { k = value; }
    Fraction() 
    {
        x = 1;
        y = 1;
        ++k;
    }
    Fraction(int x_, int y_)
    {
        x = x_;
        y = y_;
        
    }
    ~Fraction() 
    {
        x = 0;
        y = 0;
    }
    void reduce()
    {
        int dcm = NOD(x, y);
        x /= dcm;
        y /= dcm;
        
    }
    void ShowNumber() 
    {
        cout << "count of fractions:" << k << endl;
    }
    Fraction operator + (const Fraction&);
    Fraction operator - (const Fraction&);
    Fraction operator * (const Fraction&);
    Fraction operator / (const Fraction&);
    friend std::ostream& operator << (std::ostream&, const Fraction&);
    friend std::istream& operator >> (std::istream&, Fraction&);

    Fraction operator+(Fraction& a)
    {
        Fraction result;
        if (y== a.y)
        {
            result.y = y;
            result.x = x + a.x;
        }
        else
        {
            result.y = y * a.y;
            result.x = (x * a.y) + (a.x * y);
        }
        result.reduce();
        return result;
    }
    Fraction operator-(Fraction& a)
    {
        Fraction result;
        if (y == a.y)
        {
            result.y = y;
            result.x = x - a.x;
        }
        else
        {
            result.y = y * a.y;
            result.x = (x * a.y) - (a.x * y);
        }
        result.reduce();
        return result;
    }
    Fraction operator*(Fraction& a)
    {
        Fraction result;
        result.x = x * a.x;
        result.y = y * a.y;
        result.reduce();
        return result;
    }
    Fraction operator/(Fraction& a)
    {
        Fraction result;
        Fraction result1;
        Fraction result2;
        result1 = Fraction(a.y, a.x);
        result2 = Fraction(x, y);
        result = result1 * result2;
        result.reduce();
        return result;

    }
    friend ostream& operator<<(ostream& os, Fraction& a)
    {
        os << a.x << "/" << a.y ;
        return os;
    }
    friend istream& operator >> (istream& is, Fraction& a)
    {
        is >> a.x >> a.y;
        if (!a.y)
        {
            throw exception();
        }
       return is;
    }
    
};


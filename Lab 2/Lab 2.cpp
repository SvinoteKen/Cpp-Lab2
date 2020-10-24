#include <iostream>
#include <string>
#include "Matrix.h"
#include "Vector.h"
using namespace std;
int main()
{
    Matrix arr(5,5);
    arr.initializeMatrix();
    arr.printMatrix();
    arr.at(0, 2);
    arr.setAt(0, 2, 8);
    arr.at(0, 2);
    Vector arr2(10);
    arr2.convertArray(arr.getMatrix(), arr.getN(), arr.getM());
    arr2.printVertex();
}

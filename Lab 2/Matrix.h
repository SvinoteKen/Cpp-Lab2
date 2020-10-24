#pragma once
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class Matrix
{
 private:
    int** arr;
    int n, m;
 public:
     Matrix() 
     { 
         n = m = 1; 
         arr = new int* [n]; 
         for (int i = 0; i < 1; ++i) 
         { 
             arr[i] = new int[m]; 
         }
         
     }
     Matrix(int n_size, int m_size)
     {
         n = n_size; m = m_size;
         arr = new int* [n];
         for (int i = 0; i < n; ++i) 
         {
             arr[i] = new int[m];
         }
     }
     ~Matrix() 
     {
         for (int i = 0; i < n; ++i) {
             delete arr[i];
         }
          delete[]arr;
     }
     int at(int i,int j) 
     {
         cout << *(*(arr + i) + j) << endl;
         return 0;
     }
     void setAt(int i,int j,int val) 
     {
         *(*(arr + i) + j) = val;
     }
     void initializeMatrix()
     {
         for (int i = 0; i < n; ++i)
         {
             for (int j = 0; j < m; ++j)
             {
                 *(*(arr + i) + j) = factorial(i) + factorial(j);
             }
         }
     }
      
      int factorial(int x)
      {
          int num = 1;
          for (int i = 1; i <= x; ++i)
          {
              num = num * i;
          }
          return num;
      }
     
      void printMatrix()
      {

          for (int i = 0; i < n; ++i)
          {

              for (int j = 0; j < m; ++j)
              {

                  cout << setw(8) << *(*(arr + i) + j);
              }
              cout << endl;
          }
          cout << endl;
      }
      int** getMatrix()
      {
          return arr;
      }
      int getN()
      {
          return n;
      }
      int getM()
      {
          return m;
      }
      void operator++() 
      {
          for (int i = 0; i < n; ++i)
          {
              for (int j = 0; j < m; ++j)
              {
                  *(*(arr + i) + j) += 1;
              }
          }
      }
      void operator--() 
      {
          for (int i = 0; i < n; ++i)
          {

              for (int j = 0; j < m; ++j)
              {

                  *(*(arr + i) + j) -= 1;
              }
          }
      }

      void operator++(int value) 
      {
          for (int i = 0; i < n; ++i)
          {
              for (int j = 0; j < m; ++j)
              {
                  *(*(arr + i) + j) += 1;
              }
          }
      
      }
      void operator--(int value) 
      {
          for (int i = 0; i < n; ++i)
          {

              for (int j = 0; j < m; ++j)
              {

                  *(*(arr + i) + j) -= 1;
              }
          }
      }
    
};


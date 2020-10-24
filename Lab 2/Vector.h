#pragma once
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class Vector
{
private:
	int* arr;
	int lenght;
public:
	Vector() 
	{ 
		lenght = 1;
		arr = new int[lenght];
		for (int i = 0;i < lenght;++i)
		{
			*(arr+i) = 0;
		}
	}
	Vector(int length_) 
	{
		lenght = length_;
		arr = new int[lenght];
		for (int i = 0;i < lenght;++i) 
		{ 
			*(arr + i) = 0;
		}
	}
	~Vector() 
	{
		delete[] arr;
	}
	void convertArray(int** x, int n, int m)
	{
		int cnt = n;
       int k = 0;
		for (int i = 1; i < n; i += 2)
		{
			for (int j = 0; j < m; j++, k++)
			{
				*(arr + k) = *(*(x + i) + j);
			}
		}
	}
	void printVertex()
	{
		for (int i = 0;i < lenght;++i) 
		{
			cout << *(arr + i) << " ";
		}
	}


	void operator++()
	{
		for (int i = 0; i < lenght; ++i)
		{
		    *(arr + i) += 1;
		}
	}
	void operator--()
	{
		for (int i = 0; i < lenght; ++i)
		{
			*(arr + i) -= 1;
		}
	}

	void operator++(int value)
	{
		for (int i = 0; i < lenght; ++i)
		{
			*(arr + i) += 1;
		}

	}
	void operator--(int value)
	{
		for (int i = 0; i < lenght; ++i)
		{
             *(arr + i) -= 1;
		}
	}
	int& operator[] (const int index) 
	{
		return arr[index];
	}
};


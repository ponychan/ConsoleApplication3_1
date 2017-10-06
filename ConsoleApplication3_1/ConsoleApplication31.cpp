// ConsoleApplication31.cpp: 定义控制台应用程序的入口点。
//3.1.cpp计算x的n次方的函数

#include "stdafx.h"
#include<iostream>
using namespace std;

double power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

int main()
{
	cout << " 5 to the power 2 is " << power(5, 2) << endl;
	return 0;
}


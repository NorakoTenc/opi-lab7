﻿
#include <iostream>
#include "math.h"
#include "windows.h"
//alpha
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double f, r, x, c, b;
	cout << "Уведіть r: ";
	cin >> r;
	cout << "Уведіть x ";
	cin >> x;
	cout << "Уведіть c: ";
	cin >> c;
	cout << "Уведіть b ";
	cin >> b;
	if (x < 6 && b + c != 0 && c!=0) {
		f = (a * pow(x, 3)) / c + b;
	}
	else {
		if (x > 6 && b + c == 0 && b!=0) {
			f = a * pow(x, 2) - c / b;
		}
		else {
			f = x / (-c + 2); 
		}
	}
	printf("F= %lf", f);
}
//omega
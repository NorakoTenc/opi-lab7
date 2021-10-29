#include <iostream>
#include "windows.h"
#define _USE_MATH_DEFINES 
#include "math.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double  z, y;
    int k, s;
    cout << "Уведіть y = ";
    cin >> y;
    for (s = 1, k = 1; k < 11; k++)
    {
        s = s * k;
    }
    z = s + (2*log(y));
    cout << "Z = " << z << endl;
}
#include "RightAngled.h"
#include <iostream>
#include<Windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Triangle t;
    t.Read();
    t.Display();

    double a = t.GetSide1();
    double b = t.GetSide2();
    double c = t.GetSide3();

    if ((a * a + b * b) == c * c || (a * a + c * c) == b * b || (b * b + c * c) == a * a) {
        Triangle::RightAngled r;
        r.CalculateArea(a, b, c);
        r.Display();
    }
    else {
        cout << "�������� ����������: " << t.Perimeter() << endl;
        cout << "��� �: " << t.AngleA() << endl;
        cout << "��� B : " << t.AngleB() << endl;
        cout << "��� C : " << t.AngleC() << endl;
    }

    return 0;
}
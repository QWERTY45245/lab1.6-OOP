#include "RightAngled.h"
#include <cmath>
#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;
Triangle::Triangle() {
    side1 = side2 = side3 = 0.0;
}

void Triangle::Init(double s1, double s2, double s3) {
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

void Triangle::Read() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Введіть сторони трикутника: ";
    cin >> side1 >> side2 >> side3;
}

void Triangle::Display() {
    std::cout << toString() << std::endl;
}

double Triangle::GetSide1() const {
    return side1;
}

double Triangle::GetSide2() const {
    return side2;
}

double Triangle::GetSide3() const {
    return side3;
}

void Triangle::SetSide1(double s) {
    side1 = s;
}

void Triangle::SetSide2(double s) {
    side2 = s;
}

void Triangle::SetSide3(double s) {
    side3 = s;
}

double Triangle::Perimeter() const {
    return side1 + side2 + side3;
}

double Triangle::AngleA() const {
    return acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
}

double Triangle::AngleB() const {
    return acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
}

double Triangle::AngleC() const {
    return acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
}

std::string Triangle::toString() const {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    return "Трикутник зі сторонами " + to_string(side1) + ", " + to_string(side2) + ", " + to_string(side3);
}

// Implementation of RightAngled class

Triangle::RightAngled::RightAngled() {
    area = 0.0;
}

void Triangle::RightAngled::CalculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::RightAngled::GetArea() const {
    return area;
}

void Triangle::RightAngled::Display() const {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Площа прямокутного трикутника: " << area << endl;
}
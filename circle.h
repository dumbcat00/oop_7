#pragma once
#include <iostream>
using namespace std;

class Circle
{
private:
    double x;
    double y;
    double r;

public:
    Circle(double X, double Y, double R) {
        x = X;
        y = Y;
        r = R;
        cout << "�������� �����������, ����������� ���������:" << endl;
        cout << "x = "<< x << "; " << "y = " <<y << "; " << "r = "<<r << endl;

    }
    
    ~Circle() {
        cout << "�������� ����������. " << endl;

    }
};

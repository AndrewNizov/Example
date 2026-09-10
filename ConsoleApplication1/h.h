#pragma once
#include <stdexcept>
using namespace std;

class Triangle
{
    double s;
    double h;

public:
    Triangle(double s, double h)
    {
        setS(s);
        setH(h);
    }
    double getS() const
    {
        return s;
    }
    double getH() const
    {
        return h;
    }
    void setS(double val)
    {
        if (val <= 0)throw::invalid_argument("ошибка");
        s = val;
    }
    void setH(double val)
    {
        if (val <= 0)throw::invalid_argument("ошибка");
        h = val;
    }

    double area() const
    {
        return s * h / 2;
    }
};
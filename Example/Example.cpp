#include <stdexcept>
#include <iostream>
#include "h.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double h, s;
    std::cout << "введите высоту и сторону треугольника";
    std::cin >> h >> s;
    try
    {
        Triangle T(s, h);
        std::cout << "площадь: " << T.area();
    }
    catch (const exception& e)
    {
        std::cout << "err" << e.what() << endl;
    }
   
    return 0;

}


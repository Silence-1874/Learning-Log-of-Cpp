#include <iostream>
int main()
{
    int a = 0, b = 1;
    int& ar = a;
    int& br = b;
    std::cout << "初始:\n" << "\ta = " << a
        << ";b = " << b
        << ";a + b = " << a + b << std::endl;
    std::cout << "\tar = " << ar
        << ";br = " << br
        << ";ar + br = " << ar + br << std::endl;
    a++;
    b++;
    std::cout << "改变变量的值（+1）:\n" << "\ta = " << a
        << ";b = " << b
        << ";a + b = " << a + b << std::endl;
    std::cout << "\tar = " << ar
        << ";br = " << br
        << ";ar + br = " << ar + br << std::endl;
    a *= 2;
    b *= 2;
    std::cout << "改变引用的值（×2）:\n" << "\ta = " << a
        << ";b = " << b
        << ";a + b = " << a + b << std::endl;
    std::cout << "\tar = " << ar
        << ";br = " << br
        << ";ar + br = " << ar + br << std::endl;
    return 0;
}
#include <iostream>
int main()
{
    int fun(int, int&);
    int m, a, b;
    int& ar = a, & br = b;
    std::cout << "请输入m,a,b的值:" << std::endl;
    std::cin >> m;
    std::cin >> a;
    std::cin >> b;
    std::cout << "fun(m, ar) = " << fun(m, ar) << std::endl;
    std::cout << "fun(m, br) = " << fun(m, br) << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    return 0;
}

int fun(int m, int& n)
{
    n = m * 4;
    return n;
}
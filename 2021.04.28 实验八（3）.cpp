#include <iostream>
#include <math.h>
#define PI 3.141592653589723846262643383279502841971693993751058209
inline double area(double a, double b, double c) 
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

inline double area(double l, double w) 
{
    return l * w;
}

inline double area(double r) {
    return r * r * PI;
}

int main()
{
    double a = 0, b = 0, c = 0;
    bool flag = false;
    while (!flag) 
    {
        std::cout << "请输入合法的三角形三边长:" << std::endl;
        std::cin >> a >> b >> c;
        if (a > 0 && b > 0 && c > 0) {
            if (a + b > c && b + c > a && a + c > b) {
                flag = !flag;
            }
        }
    }
    std::cout << "三角形的面积为:" << area(a, b, c) << std::endl;
    
    double l = 0, w = 0;
    while (flag) {
        std::cout << "请输入合法的矩形长与宽:" << std::endl;
        std::cin >> l >> w;
        if (l > 0 && w > 0) {
            flag = !flag;
        }
    }
    std::cout << "矩形的面积为:" << area(l, w) << std::endl;

    double r = 0;
    while (!flag) {
        std::cout << "请输入合法的圆的半径:" << std::endl;
        std::cin >> r;
        if (r > 0) {
            flag = !flag;
        }
    }
    std::cout << "圆形的面积为:" << area(r) << std::endl;

    return 0; 
}
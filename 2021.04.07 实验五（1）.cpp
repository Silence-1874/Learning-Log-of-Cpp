#include <iostream>
class Max {
public:
    int maxl(int x, int y);
    int maxl(int x, int y, int z);
    double maxl(double x, double y);
    double maxl(double x, double y, double z);
};

int Max::maxl(int x, int y)
{
    return x >= y ? x : y;
}

int Max::maxl(int x, int y, int z)
{
    return z >= (x >= y ? x : y) ? z : (x >= y ? x : y);
}

double Max::maxl(double x, double y)
{
    return x >= y ? x : y;
}

double Max::maxl(double x, double y, double z)
{
    return z >= (x >= y ? x : y) ? z : (x >= y ? x : y);
}

int main()
{
    Max m;
    int x1 = 0, y1 = 0, z1 = 0;
    std::cout << "请输入两个整数:" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "maxl(x, y) = " << m.maxl(x1, y1) << std::endl;
    
    std::cout << "请输入三个整数:" << std::endl;
    std::cin >> x1 >> y1 >> z1;
    std::cout << "maxl(x, y, z) = " << m.maxl(x1, y1, z1) << std::endl;
    
    double x2 = 0, y2 = 0, z2 = 0;
    std::cout << "请输入两个小数:" << std::endl;
    std::cin >> x2 >> y2;
    std::cout << "maxl(x, y) = " << m.maxl(x2, y2, z2) << std::endl;
    
    std::cout << "请输入三个小数:" << std::endl;
    std::cin >> x2 >> y2 >> z2;
    std::cout << "maxl(x, y, z) = " << m.maxl(x2, y2, z2) << std::endl;

    return 0;
}
#include <iostream>
class Column {
    friend double Volum(Column& c);
private:
    double r;
    double h;
public:
    Column(){}
    Column(double r, double h) : r(r), h(h){}
};

double Volum(Column& c) {
    return 3.14 * 3.14 * c.r * c.h;
}

int main()
{
    double r = 0, h = 0;
    while (r <= 0 || h <= 0) {
        std::cout << "请输入合法的圆柱的半径与高" << std::endl;
        std::cin >> r >> h;
    }

    Column c(r, h);
    std::cout << "圆柱的体积为 " << Volum(c) << std::endl;
    return 0;
}
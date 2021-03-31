#include <iostream>
class Rectangle {
private:
    double x1, y1;
    double x2, y2;
public:
    Rectangle() {};
    Rectangle(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {};
    double getArea();
};

double Rectangle::getArea()
{
    return (this->x2 - this->x1) * (this->y2 - this->y1);
}

int main()
{
    double x1, x2, x3, x4;
    std::cout << "请分别输入矩形的左下角坐标与右上角坐标:" << std::endl;
    std::cin >> x1 >> x2 >> x3 >> x4;
    Rectangle r(x1, x2, x3, x4);
    std::cout << "该矩形的面积为 " << r.getArea() << std::endl;
    return 0;
}
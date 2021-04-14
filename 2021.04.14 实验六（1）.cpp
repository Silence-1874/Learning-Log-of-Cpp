#include <iostream>
class Circle {
private:
    double radius;
public:
    Circle() {};
    Circle(double r) : radius(r) {};
    double GetArea();
};

double Circle::GetArea() 
{
    return this->radius * this->radius * 3.1415;
}

int main()
{
    double r = 0;
    std::cout << "请输入圆的半径:" << std::endl;
    cin >> r;
    while (r < 0) {
        std::cout << "请输入正确的数字!" << std::endl;
        cin >> r;
    }
    Circle cir(r);
    std::cout << "圆的半径为" << cir.GetArea() << std::endl;
    return 0;
}
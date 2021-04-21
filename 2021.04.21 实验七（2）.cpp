#include <iostream>
class Point {
private:
    double x;
    double y;
    static int cnt;
public:
    Point() {}
    Point(double x, double y) : x(x), y(y) {}
    Point(const Point& p) {
        std::cout << "------------------" << std::endl;
        std::cout << "析构函数" << "（序号" << cnt++ << "）:" << std::endl;
        std::cout << "x = " << p.x << std::endl;
        std::cout << "y = " << p.y << std::endl;
        std::cout << "------------------" << std::endl;
    }
};
int Point::cnt = 0;

void test1(Point p) {
    return;
}

Point test2() {
    Point p(2, 2);
    return p;
}

int main()
{
    double x, y;
    std::cout << "请输入x坐标与y坐标" << std::endl;
    std::cin >> x >> y;
    Point obj(x, y);
    Point p1(obj);
    test1(obj);
    test2();
    return 0;
}
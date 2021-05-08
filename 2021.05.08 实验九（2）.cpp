#include <iostream>
class Point {
private:
    double x;
    double y;
public:
    static int count;
    Point() {
        count++;
    }

    Point(double x, double y) : x(x), y(y) {
        count++;
    }

    ~Point() {
        count--;
    }
};

int Point::count = 0;

int main()
{
    Point* p =  new Point[10];
    std::cout << "执行“Point* p =  new Point[10]”后" << " count = " << Point::count << std::endl;
    
    delete[]p;
    std::cout << "执行“delete[]p”后" << " count = " << Point::count << std::endl;
    
    return 0;
}
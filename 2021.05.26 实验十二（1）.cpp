#include <iostream>
#define PI 3.1415926535
class Circle {
protected:
    double radius;
public:
    Circle(){}
    Circle(double radius) : radius(radius){}
    virtual double area() = 0;
    virtual double volume() = 0;
};

class Sphere :public Circle {
public:
    Sphere(){}
    Sphere(double radius) : Circle(radius){}
    double area() {
        return PI * 4.0 * radius * radius;
    }
    double volume() {
        return 4.0 / 3 * PI * radius * radius * radius;
    }
};

class Column :public Circle {
private:
    double h;
public:
    Column(){}
    Column(double radius, double h) : Circle(radius), h(h){}
    double area() {
        return 2 * PI * radius * h + 2 * PI * radius * radius;
    }
    double volume() {
        return PI * radius * radius * h;
    }
};

int main()
{
    Circle* s = new Sphere(8.8);
    Circle* c = new Column(8.8, 6.6);
    std::cout << "球体的表面积为:" << s->area() << endl;
    std::cout << "球体的体积为:" << s->volume() << endl;
    std::cout << "圆柱的表面积为:" << c->area() << endl;
    std::cout << "圆柱的体积为:" << c->volume() << endl;
    return 0;
}

#include <iostream>
class Shape {
protected:
    double a;
public:
    Shape(){}
    Shape(double a) : a(a){}
};

class Rectangle : public Shape {
private:
    double b;
public:
    Rectangle(){}
    Rectangle(double a) : Shape(a){}
    Rectangle(double a, double b) : Shape(a), b(b){}
    double GetArea() {
        return a * b;
    }
};

class Circle : public Shape {
public:
    Circle(){}
    Circle(double a) : Shape(a) {}
    double GetArea() {
        return 3.14 * a * a;
    }
};

class Square : public Rectangle {
public:
    Square(){}
    Square(double a) : Rectangle(a){}
    double GetArea() {
        return a * a;
    }
};

int main()
{
    Circle c(6.6);
    Rectangle r(6.6, 8.8);
    Square s(6.6);
    
    std::cout << "Circle::GetArea() = " << c.GetArea() << std::endl;
    std::cout << "Rectangle::GetArea() = " << r.GetArea() << std::endl;
    std::cout << "Square::GetArea() = " << s.GetArea() << std::endl;
    
    return 0;
}
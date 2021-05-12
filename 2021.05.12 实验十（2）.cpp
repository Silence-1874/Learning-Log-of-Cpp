#include <iostream>
class A {
protected:
    double r;
public:
    A() {
        std::cout << "constructor of A" << std::endl;
    }
    A(double r) : r(r) {
        std::cout << "constructor of A" << std::endl;
    }
};

class B {
protected:
    double h;
public:
    B() {
        std::cout << "constructor of B" << std::endl;
    }
    B(double h) : h(h) {
        std::cout << "constructor of B" << std::endl;
    }
};

class C : public A, private B {
private:
    double volume;
public:
    C() : A(6.6), B(8.8) {
        this->volume = r * r * 3.14 * h;
    }
    double getVolume() {
        return this->volume;
    }
};
int main()
{
    C c;
    std::cout << c.getVolume() << std::endl;
    return 0;
}
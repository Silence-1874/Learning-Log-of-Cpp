#include <iostream>
class Object {
private:
    double weight;
public:
    Object() {
        std::cout << "constructor of Object" << std::endl;
    }

    ~Object() {
        std::cout << "destructor of Object" << std::endl;

    }
    void setWeight(double weight) {
        this->weight = weight;
    }

    double getWeight(double weight) {
        return this->weight;
    }
};

class Box : public Object {
private:
    double height;
    double width;
public:
    Box() {
        std::cout << "constructor of Box" << std::endl;
    }

    ~Box() {
        std::cout << "destructor of Box" << std::endl;

    }

    void setHeight(double height) {
        this->height = height;
    }

    double getHeight(double height) {
        return this->height;
    }

    void setWidth(double width) {
        this->width = width;
    }

    double getWidth(double width) {
        return this->width;
    }
};

int main()
{
    Box box;
    return 0;
}
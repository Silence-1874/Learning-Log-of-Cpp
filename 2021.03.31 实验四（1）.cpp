#include <iostream>
class Dog {
private:
    int age;
    double weight;
public:
    Dog() {};
    Dog(int age, double weight) : age(age), weight(weight) {};
    bool setAge(int age);
    bool setWeight(double weight);
    int getAge();
    double getWeight();
};

bool Dog::setAge(int age)
{
    if (age < 0) {
        std::cout << "年龄非法！" << std::endl;
        return false;
    }
    this->age = age;
    return true;
}

bool Dog::setWeight(double weight)
{
    if (weight <= 0) {
        std::cout << "重量非法！" << std::endl;
        return false;
    }
    this->weight = weight;
    return true;
}

int Dog::getAge()
{
    return this->age;
}

double Dog::getWeight()
{
    return this->weight;
}

int main()
{
    int age;
    double weight;
    std::cout << "请输入对象的年龄与重量:" << std::endl;
    std::cin >> age >> weight;
    Dog d(age, weight);
    std::cout << "getAge(d) = " << d.getAge() << std::endl;
    std::cout << "getWeight(d) = " << d.getWeight() << std::endl;
    
    std::cout << "请输入修改后的年龄:" << std::endl;
    std::cin >> age;
    while (!d.setAge(age)) {
        std::cout << "请输入合法年龄:" << std::endl;
        std::cin >> age;
    }
    std::cout << "getAge(d) = " << d.getAge() << std::endl;
    
    std::cout << "请输入修改后的重量:" << std::endl;
    std::cin >> weight;
    while (!d.setWeight(weight)) {
        std::cout << "请输入合法重量:" << std::endl;
        std::cin >> weight;
    }
    std::cout << "getWeight(d) = " << d.getWeight() << std::endl;
    
    return 0;
}
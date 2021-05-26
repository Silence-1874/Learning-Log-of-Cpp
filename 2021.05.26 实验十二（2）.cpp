#include <iostream>
class BaseClass {
public:
    BaseClass(){}
    virtual ~BaseClass() {
        std::cout << "destrutor of BaseClass" << std::endl;
    }
};

class DerivedClass :public BaseClass {
public:
    DerivedClass(){}
    ~DerivedClass() {
        std::cout << "destrutor of DerivedClass" << std::endl;
    }
};

int main()
{
    BaseClass* pb = new DerivedClass();
    delete(pb);
    return 0;
}
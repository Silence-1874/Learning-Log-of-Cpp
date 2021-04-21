#include <iostream>
class Tree {
private:
    int ages;
public:
    Tree() {}
    Tree(int a) : ages(a){}
    void grow(int years) {
        ages += years;
    }
    void age() {
        std::cout << "ages = " << ages << std::endl;
    }
};
int main()
{
    int age = -1;
    while (age < 0) {
        std::cout << "请输入合法的年龄" << std::endl;
        std::cin >> age;
    }
    Tree t(age);
    t.age();
    return 0;
}
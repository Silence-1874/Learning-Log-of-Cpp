#include <iostream>
class Ruler;        //必须在这里声明，函数里通过Book引用weight时编译才不会报错
class Book {
    friend double totalWeight(Book& b, Ruler& r); //此时Ruler类如果没有声明，这段友元函数的声明不起作用
private:
    double weight;
    int page;
public:
    Book() {}
    Book(double w) : weight(w) {}
    Book(double w, int p) : weight(w), page(p) {}
};

class Ruler {
    friend double totalWeight(Book& b, Ruler& r);
private:
    double weight;
    double length;
public:
    Ruler(){}
    Ruler(double w) : weight(w){}
    Ruler(double w, double l) : weight(w), length(l){}
};

double totalWeight(Book& b, Ruler& r) {
    return r.weight + b.weight;
}

int main()
{
    double w1 = 0, w2 = 0;
    std::cout << "请分别输入Book的重量和Ruler的重量" << std::endl;
    std::cin >> w1 >> w2;
    Book b(w1);
    Ruler r(w2);
    std::cout << "totalWeight = " << totalWeight(b, r) << std::endl;
    return 0;
}
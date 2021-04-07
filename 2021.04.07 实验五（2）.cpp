#include <iostream>
class Date {
private:
    int y, m, d;
public:
    Date() {};
    Date(int y, int m, int d) : y(y), m(m), d(d) {};
    Date(int m, int d) : m(m), d(d) {};
    Date(int d) : d(d) {};
    void show();
};
 
void Date::show()
{
    if (this->y > 0) {
        std::cout << this->y << "年";
    }
    if (this->m > 0) {
        std::cout << this->m << "月";
    }
    if (this->d > 0) {
        std::cout << this->d << "日" << std::endl;
    }
}

int main()
{
    std::cout << "****************************************" << std::endl;
    std::cout << "简便起见，日期数字在1至31之间均视为合法." << std::endl;
    std::cout << "****************************************" << std::endl;
    int y = 0, m = 0, d = 0;
    while (y <= 0) {
        std::cout << "请输入合法的年份:" << std::endl;
        std::cin >> y;
        if (y <= 0) {
            std::cout << "数字非法！" << std::endl;
        }
    }    
    
    while (m <= 0 || m > 12) {
        std::cout << "请输入合法的月份:" << std::endl;
        std::cin >> m;
        if (m <= 0 || m > 12) {
            std::cout << "数字非法！" << std::endl;
        }
    }    
    
    while (d <= 0 || d > 31) {
        std::cout << "请输入合法的日期:" << std::endl;
        std::cin >> d;
        if (d <= 0 || d > 31) {
            std::cout << "数字非法！" << std::endl;
        }
    }

    Date d1(y, m, d);
    Date d2(m, d);
    Date d3(d);
    std::cout << "d1.show() = ";
    d1.show();
    std::cout << "d2.show() = ";
    d2.show();
    std::cout << "d3.show() = ";
    d3.show();
    return 0;
}
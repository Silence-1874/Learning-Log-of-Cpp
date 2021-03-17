#include <iostream>
#define PI 3.141592653589723846262643383279502841971693993751058209
int main()
{
    int flag = 1;
    while (flag) {
        int iType = 0;
        int r = 0, a = 0, b = 0;
        std::cout << "请选择图形类型（1代表圆形，2代表长方形，3代表正方形）" << std::endl;
        std::cin >> iType;

        while (iType > 3 || iType < 1) {
            std::cout << "不存在该图形类型，请重新输入：" << std::endl;
            std::cin >> iType;
        }

        switch (iType) {
        case 1:
            std::cout << "请输入圆形的半径：" << std::endl;
            std::cin >> r;
            std::cout << "此圆形的面积为" << PI * r * r << std::endl;
            break;
        case 2:
            std::cout << "请输入长方形的长与宽：" << std::endl;
            std::cin >> a;
            std::cin >> b;
            std::cout << "此长方形的面积为" << a * b << std::endl;
            break;
        case 3:
            std::cout << "请输入正方形的边长：" << std::endl;
            std::cin >> a;
            std::cout << "此正方形的面积为" << a * a << std::endl;
            break;
        default:
            ;
        }
        std::cout << "是否继续输入？（输入1继续，输入0结束程序）";
        std::cin >> flag;
    }
    std::cout << "程序结束。" << std::endl;
    return 0;
}
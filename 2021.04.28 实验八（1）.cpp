#include <iostream>
inline int getMax(int * p, int n)
{
    int max = -2147483648;
    for (int i = 0; i < n; i++) {
        max = max > *(p + i) ? max : *(p + i);
    }
    return max;
}
int main()
{
    int n = 0;
    while (n <= 0) {
        std::cout << "请输入合法的数组大小：" << std::endl;
        std::cin >> n;
    }
    int* p = new int[n];
    //假设数组元素均为整数
    std::cout << "请输入" << n << "个整数:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> *(p + i);
    }
    std::cout << "数组中最大值为" << getMax(p, n) << std::endl;
    delete[]p;
    return 0;
}

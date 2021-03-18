#include <iostream>
int fib(int);

int main()
{
    int n = 0;
    std::cout << "请输入要计算的Fibonacci级数：" << std::endl;
    std::cin >> n;
    std::cout << n << "级Fibonacci的值为 " << fib(n) << std::endl;
    return 0;
}

int fib(int n)
{
    if (n <= 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);	
}
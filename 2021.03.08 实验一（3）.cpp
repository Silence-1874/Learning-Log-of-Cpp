#include <iostream>
int main()
{
    int i = 0, sum1 = 0;
    while (i <= 1000) {
        sum1 += i;
        i++;
    }
    std::cout << "（while语句）0-1000的和为" << sum1 << std::endl;

    i = 0;
    int sum2 = 0;
    do {
        sum2 += i;
        i++;
    } while (i <= 1000);
    std::cout << "（do...while语句）0-1000的和为" << sum2 << std::endl;

    int sum3 = 0;
    for (i = 0; i <= 1000; i++) {
        sum3 += i;
    }
    std::cout << "（for语句）0-1000的和为" << sum3 << std::endl;
    return 0;
}
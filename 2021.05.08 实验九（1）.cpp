#include <iostream>
#define NUM 10

class Student {
private:
    double score;
    static double total;
    static int count;
public:
    Student() {}

    void scoreTotalCount(float s) {
        this->score = s;
        total += score;
        count++;
    }

    static double sum() {
        return total;
    }

    static double average() {
        return total / count;
    }
};

double Student::total = 0;
int Student::count = 0;

int main()
{
    float s = 0;
    Student stud[NUM];
    //简单起见，不再对输入的数据进行检查
    std::cout << "请输入全班十个学生各自的成绩:" << std::endl;
    for (auto stu : stud) {
        std::cin >> s;
        stu.scoreTotalCount(s);
    }

    std::cout << "总分为 " << Student::sum() << std::endl;
    std::cout << "平均分为 " << Student::average() << std::endl;
    
    return 0;
}
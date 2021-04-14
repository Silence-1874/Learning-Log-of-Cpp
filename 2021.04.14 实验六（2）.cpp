#include <iostream>
#include <string>
class Student {
private:
    string n;
    string name;
    double score;
public:
    Student() {};
    Student(string n, string name, double score) : n(n), name(name), score(score)
    {
        std::cout << "构造函数执行。" << std::endl;
    }
    ~Student()
    {
        std::cout << "析构函数执行。" << std::endl;
    }
    void show();
};
void Student::show() {
    std::cout 
        << "学号 " << n
        << " 的姓名为 " << name
        << " ,其成绩为 " << score 
        << "。" <<
    std::endl;
}

int main()
{
    double score;
    string n, name;
    std::cout << "请输入学号，姓名和成绩" << std::endl;
    std::cin >> n >> name >> score;
    Student s(n, name, score);
    std::cout << "s.show():" << std::endl;
    s.show();
    return 0;
}
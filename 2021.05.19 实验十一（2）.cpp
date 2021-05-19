#include <iostream>
class Person {
protected:
    string name;
    char sex;
    int age;
public:
    Person(){}
    Person(string name, char sex, int age) : name(name), sex(sex), age(age) {}
    virtual void show();
};

void Person::show() {
    std::cout << "name = " << this->name << std::endl;
    std::cout << "sex = " << this->sex << std::endl;
    std::cout << "age = " << this->age << std::endl;
    std::cout << "----------分割线-----------" << std::endl;
}

class Teacher : virtual public Person {
private:
    char title;
    int course;
public:
    Teacher(){}
    Teacher(string name, char sex, int age, char title, int course) :
        Person(name, sex, age), title(title), course(course){}
    virtual void show();
};

void Teacher::show() {
    std::cout << "name = " << this->name << std::endl;
    std::cout << "sex = " << this->sex << std::endl;
    std::cout << "age = " << this->age << std::endl;
    std::cout << "title = " << this->title << std::endl;
    std::cout << "course = " << this->course << std::endl;
    std::cout << "----------分割线-----------" << std::endl;
}

class Student : virtual public Person {
private:
    string num;
    int major;
public:
    Student(){}
    Student(string name, char sex, int age, string num, int major) : 
        Person(name, sex, age), num(num), major(major){}
    virtual void show();
};

void Student::show() {
    std::cout << "name = " << this->name << std::endl;
    std::cout << "sex = " << this->sex << std::endl;
    std::cout << "age = " << this->age << std::endl;
    std::cout << "num = " << this->num << std::endl;
    std::cout << "major = " << this->major << std::endl;
    std::cout << "----------分割线-----------" << std::endl;
}

class Leave_school : public Teacher, public Student{
private:
    string tutor;
    string reason;
public:
    Leave_school(){}
    Leave_school(string name, char sex, int age, string tutor, string reason) : Person(name, sex, age), tutor(tutor), reason(reason){}
    Leave_school(string name, char sex, int age, char title, int course, string tutor, string reason) :
        Teacher(name, sex, age, title, course), tutor(tutor), reason(reason){}
    Leave_school(string name, char sex, int age, string num, int major, string tutor, string reason) :
        Student(name, sex, age, num, major), tutor(tutor), reason(reason){}
    virtual void show();
};

void Leave_school::show() {
    std::cout << "name = " << this->name << std::endl;
    std::cout << "sex = " << this->sex << std::endl;
    std::cout << "age = " << this->age << std::endl;
    std::cout << "tutor = " << this->tutor << std::endl;
    std::cout << "reason = " << this->reason << std::endl;
    std::cout << "----------分割线-----------" << std::endl;
}

int main()
{
    Student s("silecen", 'm', 18, "22", 1191);
    Teacher t("cls", 'w', 24, 'A', 15123);
    Leave_school ls("silecen", 'm', 22, "cls", "graduate");
    
    std::cout << "s.show():"<< std::endl;
    s.show();
    std::cout << "t.show():"<< std::endl;
    t.show();
    std::cout << "ls.show():"<< std::endl;
    ls.show();
    
    return 0;
}
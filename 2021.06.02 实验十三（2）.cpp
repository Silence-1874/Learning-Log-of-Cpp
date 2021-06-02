#include <iostream>
#include <string>
class Teacher {
protected:
    string name;
    int lessons;
public:
    Teacher(){}
    Teacher(string name, int lessons) : name(name), lessons(lessons){}
    virtual int salary() = 0;
    virtual void print() = 0;
};

class Professor : public Teacher {
public:
    Professor(){}
    Professor(string name, int lessons) : Teacher(name, lessons){}
    
    int salary() {
        return 5000 + 50 * this->lessons;
    }

    void print() {
        std::cout << name << " 教授的月工资为\t\t" << salary() << "元" << std::endl;
    }
};

class AssociateProfessor : public Teacher {
public:
    AssociateProfessor(){}
    AssociateProfessor(string name, int lessons) : Teacher(name, lessons){}
    
    int salary() {
        return 3000 + 30 * this->lessons;
    }

    void print() {
        std::cout << name << " 副教授的月工资为\t" << salary() << "元" << std::endl;
    }
};

class Lecture : public Teacher {
public:
    Lecture(){}
    Lecture(string name, int lessons) : Teacher(name, lessons){}
    
    int salary() {
        return 2000 + 20 * lessons;
    }

    void print() {
        std::cout << name << " 讲师的月工资为\t\t" << salary() << "元" << std::endl;
    }
};
int main()
{
    Teacher* p = NULL;
    Professor prf("James Gosling", 10);
    AssociateProfessor aprf("Bjarne Stroustrup", 10);
    Lecture lct("Linus Torvald", 10);
    
    p = &prf;
    p->print();

    p = &aprf;
    p->print();

    p = &lct;
    p->print();

    return 0;
}
/**
 * @breif: Dual Stack
 * @author silence
 * @time 2021-10-15 20:44:19
 */
#include <iostream>

typedef int SElemType;
typedef struct {
    int top[2], bot[2]; // 栈顶和栈底指针
    SElemType *V;       // 栈数组
    int m;              // 栈最大可容纳元素个数
}DblStack;

void Dblpush(DblStack &s, SElemType x, int i);
int Dblpop(DblStack &s, int i, SElemType &x);
int IsEmpty(DblStack s, int i);
int IsFull(DblStack s);

// 把x插入到栈i的栈
void Dblpush(DblStack &s, SElemType x, int i) {
    // 检查i的合法性
    if (i != 0 && i != 1) {
        std::cerr << "Error: i must be 0 or 1";
        exit(1);
    }

    // 检查双栈是否已满
    if (IsFull(s)) {
        std::cerr << "Push Failed: Stack is full";
        exit(1);
    }

    if (i == 0) {
        s.V[++s.top[0]] = x; // 压入栈0
    } else {
        s.V[--s.top[1]] = x; // 压入栈1
    }
}

// 退掉位于栈i栈顶的元素
int Dblpop(DblStack &s, int i, SElemType &x) {
    // 检查i的合法性
    if (i != 0 && i != 1) {
        std::cerr << "Error: i must be 0 or 1";
        exit(1);
    }

    // 检查栈i是否已空
    if (IsEmpty(s, i)) {
        std::cerr << "Pop Failed: Stack is empty";
        exit(1);
    }

    if (i == 0) {
        x = s.V[s.top[0]--]; // 弹出栈0的栈顶元素
    } else {
        x = s.V[s.top[1]++]; // 弹出栈1的栈顶元素
    }
}

// 判栈i空否，空返回1，否则返回0
int IsEmpty(DblStack s, int i) {
    // 检查i的合法性
    if (i != 0 && i != 1) {
        std::cerr << "Error: i must be 0 or 1";
        exit(1);
    }
    return s.top[i] == s.bot[i];
}

// 判栈满否，满返回1，否则返回0
int IsFull(DblStack s) {
    return s.top[0] + 1 == s.top[1];
}

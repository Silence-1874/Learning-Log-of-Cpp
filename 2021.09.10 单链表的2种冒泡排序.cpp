/**
 * @brief 单链表的2种冒泡排序
 * @author silence
 * @time 2021-09-10 19:50:04
 */
#include <c++/iostream>

class LinkedList {
public:
    //定义结点类
    class Node {
    public:
        int data{};   //数据域
        Node *next{}; //指针域
        Node() = default;    //保留默认构造函数
        explicit Node(int data) : data(data) {}   //创建有参构造函数
    };

    Node *dummy_head;   //哨兵结点
    int size;           //链表长度

    /**
     * 初始化链表
     */
    LinkedList() {
        dummy_head = new Node(-1);
        dummy_head->next = nullptr;
        size = 0;
    }

    void init() {
        insert(0, 4);
        insert(0, 3);
        insert(0, 5);
        insert(0, 6);
        insert(0, 1);
        insert(0, 2);
    }

    /**
     * 在指定下标的结点前插入新结点
     * @param index 指定的下标(下标从0开始)
     * @param data 待插入结点的data值
     */
    void insert(int index, int data) {
        if (index > size || index < 0) {
            return;
        }
        Node *new_node = new Node(data);
        Node *pre = dummy_head;
        Node *cur = dummy_head->next;
        for (int i = 0; i < index; i++) {
            pre = pre->next;
            cur = cur->next;
        }

        new_node->next = pre->next;
        pre->next = new_node;

        size++;
    }

    /**
     * 打印链表
     */
    void print() const {
        Node *cur = dummy_head->next;
        while (cur->next != nullptr) {
            std::cout << cur->data << "->";
            cur = cur->next;
        }
        std::cout << cur->data << std::endl;
    }


    /**
     * 冒泡排序方法1（仅交换值）
     */
    void bubble_sort_1() const {
        Node *cur = dummy_head->next;

        for (; cur->next != nullptr; cur = cur->next) {
            bool is_sort = true;
            Node *p = cur;

            for (; p->next != nullptr; p = p->next) {
                if (p->data > p->next->data) {
                    swap_1(p, p->next);
                    is_sort = false;
                }
            }

            if (is_sort) {
                return;
            }
        }
    }

    /**
     * 冒泡排序方法2（同时改变链表结构）
     */
    void bubble_sort_2() const {
        Node *cur = dummy_head;

        for (; cur->next != nullptr; cur = cur->next) {
            bool is_sort = true;
            Node *p_pre = cur;
            Node *p = cur->next;

            for (; p->next != nullptr; p = p->next, p_pre = p_pre->next) {
                if (p->data > p->next->data) {
                    swap_2(p_pre, p, p->next);
                    p = p_pre->next;
                    is_sort = false;
                }
            }

            if (is_sort) {
                return;
            }
        }
    }

private:
    /**
     * 交换方法1（仅交换值）
     * @param n1, n2 要交换值的两个结点
     */
    static void swap_1(Node *n1, Node *n2) {
        int t = n1->data;
        n1->data = n2->data;
        n2->data = t;
    }

    /**
     * 交换方法2（改变链表结构）
     * @param n1, n2 要交换值的两个结点
     * @param pre n1的前驱结点
     */
    static void swap_2(Node *pre, Node *n1, Node *n2) {
        Node *temp = n2->next;
        pre->next = n2;
        n2->next = n1;
        n1->next = temp;
    }
};

int main() {
    LinkedList linkedList = *new LinkedList();
    linkedList.init();
    linkedList.print();
    //linkedList.bubble_sort_1();
    linkedList.bubble_sort_2();
    linkedList.print();
}

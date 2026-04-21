#include <iostream>
using namespace std;

typedef int elem;

class MyStack{
    int maxsize;
    int top;
    elem* list;
    public:
    MyStack(int = 10);
    ~MyStack();
    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const elem& item);
    elem* pop();
    void print() const;
};
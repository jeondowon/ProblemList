#include <iostream>
using namespace std;

typedef string elem;

class MyStack{
    int top;
    int maxsize;
    double max_gpa;
    elem* list;
    public:
    MyStack(int = 100);
    ~MyStack();
    static int getCount(string filename);
    void loadData(string filename);
    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const elem& item);
    void clear();
    void print() const;
};
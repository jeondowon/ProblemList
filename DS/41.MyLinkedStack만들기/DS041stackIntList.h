#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data);  //constructor
};

class MyStackIntList{
    private:
    Node* stacktop;      // top element

    public:
    void initialize();
    bool isEmpty() const;     // check either stack is empty or not
    void push(const int& x);   // push function for inserting an element at the top of stack
    void pop();          // pop function for deleting the topmost element
    int top() const;
    int getNodeCnt() const;
    MyStackIntList();    // constructor to make the stack
    ~MyStackIntList();   // Destructor to remove from memory
    void printAll();     // function for displaying the stack
};


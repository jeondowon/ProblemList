#include <iostream>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    Node(char data);  //constructor
};

class MyStackCharList{
    private:
    Node* stacktop;      // top element

    public:
    void initialize();
    bool isEmpty() const;     // check either stack is empty or not
    void push(const char& x);   // push function for inserting an element at the top of stack
    void pop();          // pop function for deleting the topmost element
    char top() const;
    MyStackCharList();    // constructor to make the stack
    ~MyStackCharList();   // Destructor to remove from memory
    void printAll(MyStackCharList& right);     // function for displaying the stack
};


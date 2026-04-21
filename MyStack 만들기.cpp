#include <iostream>
#include <string>

using namespace std;

typedef int element;

class MyStack {
private:
    int maxsize;
    int top;
    element* list;
public:
    MyStack(int size = 10) {
        maxsize = size;
        top = -1;
        list = new element[maxsize];
    }
    ~MyStack() {
        delete[] list;
    }
    void initialize() {
        top = -1;
    }
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top == maxsize - 1;
    }
    void push(const element& e) {
        if (!isFull()) {
            list[++top] = e;
        }
    }
    element pop() {
        if (!isEmpty()) {
            return list[top--];
        }
        return -1; // Or some error value
    }
    void print() const {
        for (int i = top; i >= 0; --i) {
            cout << list[i] << endl;
        }
    }
};

int main() {
    int size;
    if (cin >> size) {
        MyStack stack(size);
        string cmd;
        while (cin >> cmd) {
            if (cmd == "push") {
                element val;
                cin >> val;
                stack.push(val);
            } else if (cmd == "pop") {
                stack.pop();
            } else if (cmd == "print") {
                stack.print();
                break;
            }
        }
    }
    return 0;
}

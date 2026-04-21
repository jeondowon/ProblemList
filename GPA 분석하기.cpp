#include <iostream>
#include <string>

using namespace std;

typedef string element;

class MyStack {
private:
    int maxsize;
    int top;
    element* list;
public:
    MyStack(int size = 100) {
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
        return "";
    }
    void print() const {
        for (int i = top; i >= 0; --i) {
            cout << list[i] << endl;
        }
    }
};

int main() {
    double max_gpa = -1.0;
    MyStack stack;
    
    double gpa;
    string name;
    
    while(cin >> gpa >> name) {
        if (gpa > max_gpa) {
            max_gpa = gpa;
            stack.initialize();
            stack.push(name);
        } else if (gpa == max_gpa) {
            stack.push(name);
        }
    }
    
    cout << "Top GPA: " << max_gpa << endl;
    stack.print();

    return 0;
}

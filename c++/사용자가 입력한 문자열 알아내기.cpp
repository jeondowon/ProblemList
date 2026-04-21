#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node(char d) : data(d), next(nullptr) {}
};

class MyLinkedStack {
private:
    Node* stacktop;
public:
    MyLinkedStack() : stacktop(nullptr) {}
    ~MyLinkedStack() { clear(); }
    bool isEmpty() const { return stacktop == nullptr; }
    void push(const char& e) {
        Node* newNode = new Node(e);
        newNode->next = stacktop;
        stacktop = newNode;
    }
    void pop() {
        if (!isEmpty()) {
            Node* temp = stacktop;
            stacktop = stacktop->next;
            delete temp;
        }
    }
    char top() const {
        if (!isEmpty()) return stacktop->data;
        return '\0';
    }
    void clear() {
        while (!isEmpty()) pop();
    }
};

int main() {
    string s;
    while (cin >> s) {
        if (s == "q") {
            break;
        }
        
        MyLinkedStack left, right;
        for (char c : s) {
            if (c == '<') {
                if (!left.isEmpty()) {
                    right.push(left.top());
                    left.pop();
                }
            } else if (c == '>') {
                if (!right.isEmpty()) {
                    left.push(right.top());
                    right.pop();
                }
            } else {
                left.push(c);
            }
        }
        
        // Output from left stack to print properly
        // Actually left stack has them in reverse. We can push everything from left to right.
        while (!left.isEmpty()) {
            right.push(left.top());
            left.pop();
        }
        
        cout << "=> ";
        while (!right.isEmpty()) {
            cout << right.top();
            right.pop();
        }
        cout << endl;
    }
    return 0;
}

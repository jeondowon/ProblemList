#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class MyLinkedStack {
private:
    Node* stacktop;
public:
    MyLinkedStack() : stacktop(nullptr) {}
    ~MyLinkedStack() {
        clear();
    }
    void initialize() {
        clear();
    }
    bool isEmpty() const {
        return stacktop == nullptr;
    }
    void push(const int& e) {
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
    int top() const {
        if (!isEmpty()) return stacktop->data;
        return -1;
    }
    int getNodeCnt() const {
        int cnt = 0;
        Node* curr = stacktop;
        while (curr) {
            cnt++;
            curr = curr->next;
        }
        return cnt;
    }
    void printAll() {
        Node* curr = stacktop;
        if (!curr) {
            cout << "Stack is empty" << endl;
            return;
        }
        int total = getNodeCnt();
        cout << total << endl;
        // The display logic is specific... let's just print elements
        while (curr) {
            cout << curr->data;
            if (curr->next) cout << " -> ";
            curr = curr->next;
        }
        cout << " (" << total << " nodes)" << endl;
    }
    void clear() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    MyLinkedStack stack;
    string cmd;
    while (cin >> cmd) {
        if (cmd == "push") {
            int val;
            cin >> val;
            stack.push(val);
        } else if (cmd == "pop") {
            stack.pop();
        } else if (cmd == "top") {
            if (!stack.isEmpty()) cout << stack.top() << endl;
        } else if (cmd == "print") {
            stack.printAll();
        } else if (cmd == "clear") {
            stack.clear();
        } else if (cmd == "q") {
            cout << "Bye!" << endl;
            break;
        }
    }
    return 0;
}

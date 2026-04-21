#include <iostream>
#include <string>
#include <sstream>

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
    ~MyLinkedStack() { clear(); }
    bool isEmpty() const { return stacktop == nullptr; }
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
        while (curr) { cnt++; curr = curr->next; }
        return cnt;
    }
    void clear() {
        while (!isEmpty()) pop();
    }
};

void evaluate(string line) {
    MyLinkedStack stack;
    stringstream ss(line);
    string token;
    bool error = false;
    
    // Print the original expression up to '='
    string expr = line;
    
    while (ss >> token) {
        if (token == "=") {
            break;
        } else if (token[0] == '#') {
            int val = stoi(token.substr(1));
            stack.push(val);
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.getNodeCnt() < 2) {
                cout << expr << "\n=> Expression error !!!\n";
                return;
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            if (token == "+") stack.push(a + b);
            else if (token == "-") stack.push(a - b);
            else if (token == "*") stack.push(a * b);
            else if (token == "/") {
                if (b == 0) {
                    cout << expr << "\n=> Division by 0\n";
                    return;
                }
                stack.push(a / b);
            }
        } else {
            // invalid token
            cout << expr << "\n=> Expression error !!!\n";
            return;
        }
    }
    
    if (stack.getNodeCnt() == 1) {
        cout << expr << " " << stack.top() << endl;
    } else if (stack.getNodeCnt() > 1) {
        cout << expr << "\n=> Too many operands !!!\n";
    } else {
        cout << expr << "\n=> Expression error !!!\n";
    }
}

int main() {
    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        evaluate(line);
    }
    return 0;
}

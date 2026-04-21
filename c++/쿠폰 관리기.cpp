#include <iostream>
#include <string>

using namespace std;

struct Coupon {
    int rank;
    string item;
};

typedef Coupon element;

class CouponStack {
private:
    int maxsize;
    int top;
    element* list;
public:
    CouponStack(int size = 10) {
        maxsize = size;
        top = -1;
        list = new element[maxsize];
    }
    ~CouponStack() {
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
        return {0, ""}; 
    }
    void p() const {
        for (int i = top; i >= 0; --i) {
            cout << list[i].rank << "등 - " << list[i].item << endl;
        }
    }
};

int main() {
    int maxsize;
    if (!(cin >> maxsize)) return 0;
    
    CouponStack stack(maxsize);
    string cmd;
    
    while(cin >> cmd) {
        if (cmd == "+") {
            Coupon c;
            cin >> c.rank;
            getline(cin, c.item);
            // remove leading space
            size_t start = c.item.find_first_not_of(" ");
            if(start != string::npos) c.item = c.item.substr(start);
            stack.push(c);
        } else if (cmd == "-") {
            Coupon c = stack.pop();
            cout << c.rank << "등 - " << c.item << endl;
        } else if (cmd == "q") {
            break;
        }
    }
    return 0;
}

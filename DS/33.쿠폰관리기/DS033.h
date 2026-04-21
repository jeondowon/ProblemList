#include <iostream>
using namespace std;

struct coupon{
    int rank = 0;
    string name = "";
};

typedef coupon elem;

class CouponStack{
    int top;
    int maxsize;
    elem* list;
    public:
    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const elem& item);
    elem* pop();
    CouponStack(int = 10);
    ~CouponStack();
    void print();       //stack 전체 출력
    void rprint();       // stack pop하면서 전체출력
};
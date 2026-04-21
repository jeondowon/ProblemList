#include "DS042stackIntList.h"
#include <iostream>
using namespace std;

Node::Node(int data){
    this->data = data;
    this->next = NULL;
}

void MyStackIntList::initialize(){
    while(stacktop != NULL){
        pop();
    }
}

MyStackIntList::MyStackIntList(){
    stacktop = NULL;
}

MyStackIntList::~MyStackIntList(){
    initialize();
}

void MyStackIntList::push(const int& x){
    Node* p = new Node(x);
    if(isEmpty()){
        stacktop = p;
        p->next = NULL;
        return;
    }
    p->next = stacktop;
    stacktop = p;
}

int MyStackIntList::pop(){
    if(isEmpty()){
        cout << "Stack Underflow!" << endl;
        exit(0);
    }
    int temp;
    Node* p = stacktop;
    temp = p->data;
    stacktop = stacktop->next;
    delete p;
    return temp;
}

bool MyStackIntList::isEmpty() const{
    return stacktop == NULL;
}

int MyStackIntList::getNodeCnt() const{
    Node* n;
    int count = 0;
    for(n = stacktop; n != NULL; n = n->next){
        count++;
    }
    return count;
}

int MyStackIntList::top() const{
    if(stacktop != NULL)
        return stacktop->data;
    else
        return -1;
}

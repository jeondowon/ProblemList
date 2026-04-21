#include "DS043stack.h"
#include <iostream>
using namespace std;

Node::Node(char data){
    this->data = data;
    this->next = NULL;
}

void MyStackCharList::initialize(){
    while(stacktop != NULL){
        pop();
    }
}

MyStackCharList::MyStackCharList(){
    stacktop = NULL;
}

MyStackCharList::~MyStackCharList(){
    initialize();
}

void MyStackCharList::push(const char& x){
    Node* p = new Node(x);
    if(isEmpty()){
        stacktop = p;
        p->next = NULL;
        return;
    }
    p->next = stacktop;
    stacktop = p;
}

void MyStackCharList::pop(){
    if(isEmpty()){
        cout << "Stack Underflow!" << endl;
        return;
    }
    Node* p = stacktop;
    stacktop = stacktop->next;
    delete p;
}

bool MyStackCharList::isEmpty() const{
    return stacktop == NULL;
}

char MyStackCharList::top() const{
    if(stacktop != NULL)
        return stacktop->data;
    else
        return -1;
}

void MyStackCharList::printAll(MyStackCharList& right){
    MyStackCharList templist;
    Node* n;
    cout << "=> ";
    while(!this->isEmpty()){
        templist.push(this->top());
        this->pop();
    }
    while(!templist.isEmpty()){
        cout << templist.top();
        templist.pop();
    }
    while(!right.isEmpty()){
        cout << right.top();
        right.pop();
    }
    cout << endl;
    this->initialize();
    right.initialize();
}

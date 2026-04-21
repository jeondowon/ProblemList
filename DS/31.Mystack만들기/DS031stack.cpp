#include <iostream>
#include "DS031.h"
using namespace std;

MyStack::MyStack(int size){
    maxsize = size;
    list = new elem[maxsize];
    initialize();
}

MyStack::~MyStack(){
    delete[] list;
}

void MyStack::initialize(){
    top = -1;
}

bool MyStack::isEmpty() const{
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool MyStack::isFull() const{
    if(top == maxsize - 1){
        return true;
    }
    else{
        return false;
    }
}

void MyStack::push(const elem& item){
    if(!isFull()){
        top++;
        list[top] = item;
    }
    else{
        cout << "Stack Overflow!" << endl;
    }
}

elem* MyStack::pop(){
    elem* save = new elem;
    *save = -1;
    if(!isEmpty()){
        *save = list[top];
        top--;
        return save;
    }
    cout << "Stack Overflow!" << endl;
    return save;
}

void MyStack::print() const{
    elem i;
    for(int i = top; i != -1; i--){
        cout << list[i] << endl;
    }
}
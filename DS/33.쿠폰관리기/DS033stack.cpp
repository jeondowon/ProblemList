#include <iostream>
#include <fstream>
#include "DS033.h"
using namespace std;

CouponStack::CouponStack(int size){
    maxsize = size;
    list = new elem[maxsize];
    initialize();
}

CouponStack::~CouponStack(){
    delete[] list;
}

void CouponStack::initialize(){
    top = -1;
}

bool CouponStack::isEmpty() const{
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool CouponStack::isFull() const{
    if(top == maxsize - 1){
        return true;
    }
    else{
        return false;
    }
}

void CouponStack::push(const elem& item){
    if(!isFull()){
        top++;
        list[top] = item;
    }
    else{
        cout << "Stack Overflow!" << endl;
    }
}

elem* CouponStack::pop(){
    elem* remove = new elem();
    if(!isEmpty()){
        remove = new elem();
        *remove = list[top];
        top--;
    }
    return remove;
}

void CouponStack::print(){
    if(!isEmpty()){
        for(int i = top; i != -1; i--){
            cout << list[i].rank << "등 - " << list[i].name << endl;
        }
    }
    else{
        cout << "Empty" << endl;
    }
}

void CouponStack::rprint(){
    elem* rm = pop();
    if(rm->rank == 0){
        cout << "Empty" << endl;
    }
    else{
        cout << "꺼낸 쿠폰:\n" << rm->rank << "등 - " << rm->name << endl;
        delete rm;
        cout << "남은 쿠폰: " << endl;
        if(isEmpty()){
            cout << "없음" << endl;
        }
        else{
            for(int i = top; i != -1; i--){
                cout << list[i].rank << "등 - " << list[i].name << endl;
            }
        }
    }
}
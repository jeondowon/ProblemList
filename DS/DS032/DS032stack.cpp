#include <iostream>
#include <fstream>
#include "DS032.h"
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
    max_gpa = 0.0;
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

void MyStack::clear(){
    top = -1;
}

void MyStack::print() const{
    cout << "Top GPA: " << max_gpa << endl;
    int i;
    for(int i = top; i != -1; i--){
        cout << list[i] << endl;
    }
}

int MyStack::getCount(string filename){
    ifstream file(filename);
    string line;
    int count = 0;
    while(getline(file, line)){
        count++;
    }
    return count;
}

void MyStack::loadData(string filename){
    double gpa;
    string name;
    ifstream file(filename);

    while(!file.eof()){
        if(file.eof()){
            break;
        }
        file >> gpa >> name;
        if(gpa > max_gpa){
            clear();
            max_gpa = gpa;
            push(name);
        }
        else if(gpa == max_gpa){
            push(name);
        }
    }
    file.close();
}
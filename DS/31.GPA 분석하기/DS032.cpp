#include <iostream>
#include <fstream>
#include "DS032.h"
using namespace std;

int main(){
    string filename = "data2.txt";      //or data1.txt
    int count = MyStack::getCount(filename);
    MyStack stack(count);
    stack.loadData(filename);
    stack.print();
    return 0;
}


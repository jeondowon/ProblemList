#include <iostream>
#include "DS031.h"
using namespace std;

int main(){
    int size;
    cin >> size;
    MyStack stack(size);

    bool quit = false;
    string ppp;
    int num;
    while(!quit){
        cin >> ppp;
        if(ppp == "push"){
            cin >> num;
            stack.push(num);
        }
        else if(ppp == "pop"){
            elem* popnum;
            popnum = stack.pop();
        }
        else if(ppp == "print"){
            stack.print();
            quit = true;
        }
    }
    return 0;
}


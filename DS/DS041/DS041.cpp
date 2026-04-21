#include "DS041stackIntList.h"
#include <iostream>
using namespace std;

int main(){
    MyStackIntList list;
    string input;
    int input_num;
    while(true){
        cin >> input;
        if(input == "push"){
            cin >> input_num;
            list.push(input_num);
        }
        else if(input == "pop"){
            list.pop();
        }
        else if(input == "top"){
            cout << list.top() << endl;
        }
        else if(input == "print"){
            list.printAll();
        }
        else if(input == "clear"){
            list.initialize();
        }
        else if(input == "q"){
            cout << "Bye!" << endl;
            break;
        }
    }

    return 0;
}
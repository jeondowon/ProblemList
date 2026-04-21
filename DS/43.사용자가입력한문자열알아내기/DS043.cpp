#include "DS043stack.h"
#include <iostream>
using namespace std;

int main(){
    MyStackCharList left, right;
    string input;
    char c;

    while(true){
        cin >> input;
        if(input == "q"){
            break;
        }
        for(int i = 0; i < input.length(); i++){
            c = input[i];
            if(c == '<'){
                if(!left.isEmpty()){
                    right.push(left.top());
                    left.pop();
                }
            }
            else if(c == '>'){
                if(!right.isEmpty()){
                    left.push(right.top());
                    right.pop();
                }
            }
            else{
                left.push(c);
            }
        }
        left.printAll(right);
    }
    return 0;
}
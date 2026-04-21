#include "DS042stackIntList.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    MyStackIntList list;
    char operSign;
    int operand;
    ifstream file("expression.txt");
    string line;
    while(getline(file, line)){
        cout << line;
        stringstream ss(line);
        while(ss >> operSign){
            if(operSign == '#'){
                ss >> operand;
                list.push(operand);
            }
            else if(operSign == '='){
                if(list.getNodeCnt() != 1){
                    cout << "\n=> Too many operands!" << endl;
                }
                else{
                    cout << list.top() << endl;
                }
            }
            else{
                int temp;
                if(operSign == '+'){
                    temp = list.pop() + list.pop();
                    list.push(temp);
                }
                else if(operSign == '-'){
                    int a = list.pop();
                    int b = list.pop();
                    temp = b - a;
                    list.push(temp);
                }
                else if(operSign == '/'){
                    int a = list.pop();
                    int b = list.pop();
                    if(a == 0){
                        cout << "\n=> Division by 0" << endl;
                        break;
                    }
                    temp = b / a;
                    list.push(temp);
                }
                else if(operSign == '*'){
                    temp = list.pop() * list.pop();
                    list.push(temp);
                }
                else{
                    cout << "\n=> Expression error" << endl;
                    break;
                }
            }
        }
        cout << endl;
        list.initialize();
    }
    file.close();
    return 0;
}
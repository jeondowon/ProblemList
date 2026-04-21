#include <iostream>
#include <string>
using namespace std;

string ltrim(string s){
    string str = "";
    int lspace = s.find_first_not_of(" \t");
    if (lspace == string::npos){
        return "";
    }
    for (int i = 0; i < s.length()-lspace; i++) {
        str += s[lspace+i];
    }
    
    return str;
}

string rtrim(string s){
    int rspace = s.find_last_not_of(" \t");
    string str= "";
    if(rspace == string::npos){
        return "";
    }
    for (int i = 0; i <= rspace; i++){
        str += s[i];
    }
    return str;
}

int main (){
    string str;
    getline(cin, str);
    str = ltrim(str);
    str = rtrim(str);
    cout << str << endl;
    return 0;
}
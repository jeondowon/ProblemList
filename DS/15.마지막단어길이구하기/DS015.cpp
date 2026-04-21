#include <iostream>
#include <string>
using namespace std;

struct line{
    string sentence;
    int length;
};

struct lastWord{
    string word;
    int length;
};

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
    line str;
    getline(cin, str.sentence);
    str.sentence = ltrim(str.sentence);
    str.sentence = rtrim(str.sentence);
    str.length = str.sentence.length();

    int i = str.length-1;
    lastWord w;
    w.length = 0;
    while (str.sentence[i] != ' '){
        i--;
        w.length++;
    }
    w.word = "";
    for (i = str.length - w.length; i < str.length; i++){
        w.word += str.sentence[i];
    }

    cout << w.length << endl;
    //cout << w.word << endl;
    return 0;
}
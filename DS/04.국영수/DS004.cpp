#include <iostream>
#include <iomanip>
using namespace std;

struct st_score{
    int kor, eng, math;
    int total;
    double average;
};


int main(){
    st_score score;

    cin >> score.kor >> score.eng >> score.math;
    score.total = score.kor + score.eng + score.math;
    score.average = score.total / 3.0;
    cout << score.total << " ";
    cout << fixed << setprecision(1) << score.average << endl;
    if(score.kor >= 70){
        cout << "Korean - Pass" << endl;
    }
    else cout << "Korean - Fail" << endl;
    if(score.eng >= 70){
        cout << "English - Pass" << endl;
    }
    else cout << "English - Fail" << endl;
    if(score.math >= 70){
        cout << "Math - Pass" << endl;
    }
    else cout << "Math - Fail" << endl;
}
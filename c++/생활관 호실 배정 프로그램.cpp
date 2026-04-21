#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int findRoom(int persons[5]); 
void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc);

int main(){
	string mnames[10];
	string wnames[10];
	int mroom[10];		
	int wroom[10];		
	int person[2][5]={0};   
	int mcount=0, wcount=0; 
	int menu;

	srand(time(0));
	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 프로그램" << endl;
	cout << "===========================================" << endl;
	while(1){
		cout << "메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ";
		if(!(cin >> menu)) break;
		if(menu==0) break;
		else if(menu==1) {
			if(mcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> mnames[mcount];
			int roomno = findRoom(person[0]);
			if (roomno == -1) {
			    cout << "배정할 수 있는 방이 없습니다." << endl;
			    continue;
			}
			mroom[mcount] = 100+roomno;
			cout <<  mnames[mcount] << " 학생 " << mroom[mcount] << "호실 배정되었습니다." << endl;
			mcount++;
		}
		else if(menu==2) {
			if(wcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> wnames[wcount];
			int roomno = findRoom(person[1]);
			if (roomno == -1) {
			    cout << "배정할 수 있는 방이 없습니다." << endl;
			    continue;
			}
			wroom[wcount] = 200+roomno;
			cout <<  wnames[wcount] << " 학생 " << wroom[wcount] << "호실 배정되었습니다." << endl;
			wcount++;
		}
	}

	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 결과는 다음과 같습니다." << endl;
	cout << "===========================================" << endl;
	printReport(mnames, mroom, mcount, wnames, wroom, wcount);

	return 0;
}

int findRoom(int persons[5]){
    int available[5];
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(persons[i] < 2) {
            available[count++] = i;
        }
    }
    if (count == 0) return -1;
    int r = available[rand() % count];
    persons[r]++;
    return r + 1;
}

void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc){
    cout << "남학생 명단 (" << mc << "명)" << endl;
    for(int i = 0; i < mc; i++) {
        cout << i + 1 << ". " << mn[i] << " [" << mr[i] << "호]" << endl;
    }
    cout << endl << "여학생 명단 (" << wc << "명)" << endl;
    for(int i = 0; i < wc; i++) {
        cout << i + 1 << ". " << wn[i] << " [" << wr[i] << "호]" << endl;
    }
    cout << endl << "호실별 배정 명단" << endl;
    for(int room = 1; room <= 5; room++) {
        cout << 100 + room << "호 :";
        for(int i = 0; i < mc; i++) {
            if(mr[i] == 100 + room) cout << " " << mn[i];
        }
        cout << endl;
    }
    for(int room = 1; room <= 5; room++) {
        cout << 200 + room << "호 :";
        for(int i = 0; i < wc; i++) {
            if(wr[i] == 200 + room) cout << " " << wn[i];
        }
        cout << endl;
    }
}

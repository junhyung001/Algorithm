#include<iostream>
using namespace std;
    
int main(){
    int n, t, p;
    int t_cnt = 0;
    int size[6];
    int temp;

    //입력
    cin >> n;
    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }
    cin >> t >> p;

    //계산
    for (int i = 0; i < 6; i++) {
        t_cnt += (size[i] + t -1) / t;           
    }

    cout << t_cnt << endl;
    cout << n/p << " " << n%p << endl;
}

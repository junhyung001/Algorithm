#include<iostream>
using namespace std;

int main(){
    int ullim[9];
    int star[9];

    int ullim_cnt=0;
    int star_cnt=0;

    int ullim_sum=0;
    int star_sum=0;

    bool res = false;


    // 입력
    for (int i = 0; i < 9; i++) {
        cin >> ullim[i];
    }

    for (int i = 0; i < 9; i++) {
        cin >> star[i];
    }

    for (int i = 0; i < 9; i++) {
        ullim_sum += ullim[i];
        
        if (ullim_sum > star_sum) {
            res = true;
        }

        star_sum += star[i];
    }

    if (res){
        cout << "Yes";
    }else {
        cout << "No";
    }

}
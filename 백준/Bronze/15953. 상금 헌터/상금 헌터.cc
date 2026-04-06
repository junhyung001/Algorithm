#include<iostream>
#include<vector>
using namespace std;


int first(int n){
    if(n==0){
        return 0;
    }
    if (n<=1) {
        return 5000000;
    }else if(n >= 2 && n<=3){
        return 3000000;
    }else if(n >= 4 && n <=6){
        return 2000000;
    }else if (n>=7 && n<=10) {
        return 500000;
    }else if(n >=11 && n <=15){
        return 300000;
    }else if(n >= 16 && n <= 21){
        return 100000;
    }else{
        return 0;
    }
}

int second(int n){
    if(n==0){
        return 0;
    }
    if (n<=1) {
        return 5120000;
    }else if(n >= 2 && n<=3){
        return 2560000;
    }else if(n >= 4 && n <=7){
        return 1280000;
    }else if (n>=8 && n<=15) {
        return 640000;
    }else if(n >= 16 && n <= 31){
        return 320000;
    }else{
        return 0;
    }
}


int main(){
    int t;
    cin >> t;
    int n, m;
    int sum=0;

    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        // cout << first(n) << "\n";
        // cout << second(m) << "\n";
        // cout << first(n) + second(m) << "\n";
        sum += first(n);
        sum += second(m);
        
        cout << sum << "\n";
        sum = 0;
    }
}
#include<iostream>
using namespace std;

bool isHour(int x){
    return x >= 1 && x <=12;
}

bool isMinSec(int x){
    return x >= 0 && x <= 59;
}

int main(){
    int a, b, c;
    char ch;

    int count =0;

    cin >> a >> ch >> b >> ch >> c;

    // a b c
    if (isHour(a) && isMinSec(b) && isMinSec(c)) count ++;

    // a c b
    if (isHour(a) && isMinSec(c) && isMinSec(b)) count ++;

    // b a c
    if (isHour(b) && isMinSec(a) && isMinSec(c)) count ++;

    // b c a
    if (isHour(b) && isMinSec(c) && isMinSec(a)) count ++;

    // c a b
    if (isHour(c) && isMinSec(a) && isMinSec(b)) count ++;

    // c b a
    if (isHour(c) && isMinSec(b) && isMinSec(a)) count ++;

    cout << count;
}
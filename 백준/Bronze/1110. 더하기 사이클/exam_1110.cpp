#include<iostream>
using namespace std;

int main(){
    int n, temp;
    int cnt=0;

    cin >> n;
    
    temp = n;
    while (1) {
        temp = (temp%10)*10 + ((temp%10)+(temp/10)) % 10;
        cnt++;
        if (temp == n)
            break;
    }
    cout << cnt;
}
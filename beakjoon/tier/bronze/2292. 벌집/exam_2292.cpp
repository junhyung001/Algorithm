#include<iostream>
using namespace std;

int main(){
    int n;
    int cnt=1, layer=1;
    cin >> n;

    while (n>cnt) {
        cnt += 6*layer;
        layer++;
    }   
    cout << layer;
}
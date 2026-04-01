#include<iostream>
using namespace std;

int lcm(int n, int m){
    while (m!=0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}

int main(){
    int n, m, t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        cout << n*m/lcm(n, m) << endl;
    }
}
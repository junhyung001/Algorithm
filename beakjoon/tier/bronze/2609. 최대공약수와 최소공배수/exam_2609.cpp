#include<iostream>
using namespace std;

// int GCD(int n, int m){
//     int cnt = n*m;
//     int gcd=0;

//     for (int i = 1; i < cnt; i++) {
//         if (n%i==0 && m%i==0) {
//             gcd = i;
//         }
//     }   
//     return gcd;
// }

int GCD(int n, int m){
    while (m!=0) {
        int temp = m;
        m = n%m;
        n = temp;
    } 
    return n;
}

int main(){
    int n, m;

    cin >> n >> m;
    cout << GCD(n, m) << "\n" << n*m / GCD(n, m) << endl;
}
#include<iostream>
using namespace std;

void primeNumberSieve(int n, int m){

    int arr[1000000];

    for (int i = 2; i <= m; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= m; i++) {
        if (arr[i]==0) {
            continue;
        }
        for (int j = i+i; j <= m; j+=i) {
                arr[j] = 0;
            
        } 
    }
    for (int i = n; i <= m; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << endl;
        }
    }
}

int main(){
    int n, m;

    cin >> n >> m;
    primeNumberSieve(n, m);
}
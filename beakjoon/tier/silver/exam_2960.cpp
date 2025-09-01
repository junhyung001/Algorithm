#include<iostream>
using namespace std;

int primeNumberSieve(int n, int k) {
    int arr[1001];
    int cnt=0;

    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i]==0)
            continue; 

        for (int j = i; j <= n; j+=i) {
            if (arr[j]!=0) {
                arr[j] = 0;
                cnt++;
                if (cnt == k) {
                    return j;
                }
            }
        }
    }
    return 0;
}

int main() {
    int n, k;

    cin >> n >> k;
    cout << primeNumberSieve(n, k);
}
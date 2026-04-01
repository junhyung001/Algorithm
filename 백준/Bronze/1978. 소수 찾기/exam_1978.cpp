#include<iostream>
using namespace std;
int arr[1001];


void primenumber(int n){
    int count=0;
    bool isprime[1001] = {false};

    for (int k = 2; k <= 1000; k++) {
        isprime[k] = true;
    }

    for (int i = 2; i <= 1000; i++) {
        if (isprime[i]) {
            for (int j = i*i; j <= 1000; j += i) {
                isprime[j] = false;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (isprime[arr[i]]) {
            // cout << "count Check : "<< i  << "\n number check : isprime["<< i << "] : " << isprime[i] << endl;
            count++;
        }
    }
    cout << count;
}


int main(){
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    primenumber(n);
}
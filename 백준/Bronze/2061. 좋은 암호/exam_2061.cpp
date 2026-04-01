#include<iostream>
using namespace std;
int arr[1000000];

int primeNumberSieve(int k, int r){
    for (int i = 2; i <= k; i++) {
        arr[i] = i;
    }
    
    for (int i = 2; i <= k; i++) {
        if (arr[i] == 0) continue;
        
        for (int j = i; j <= k; j++) {
            if (arr[i] != 0) {
                arr[i] = 0;
                
            }
            
        }
    }
    
}

int main(){
    int k, r;

    cin >> k >> r;

}
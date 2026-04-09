#include<iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(){
    int n, k;

    cin >> n >> k;

    int answer = factorial(n) / (factorial(k) * factorial(n-k));
    cout << answer;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    int result = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        if (sum == n) {
            result = i;
            break;
        }
        
    }
    cout << result;
    
}
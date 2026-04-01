#include<iostream>
using namespace std;

int main(){
    int input;
    int res, count=0;
    cin >> input;

    // if (input == 1 || input == 2 || input == 4) {
    //     cout << '0';
    // }

    for (int i = 1; i <= input; i++) {
        for (int j = i; j <= input; j++) {
            int k = input - i - j;
            if (j > k) {
                break;
            }
            if(i+j > k){
                count++;
            }
        }        
    }
    cout << count;
}
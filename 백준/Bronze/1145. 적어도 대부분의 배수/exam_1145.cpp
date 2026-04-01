#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int j=1, cnt=0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    while (1) {
        for (int i = 0; i < 5; i++) {
            if (j%arr[i]==0) {
                cnt++;
            }
        }
        if (cnt>=3) {
            cout << j;
            break;
        }else{
            cnt = 0;
        }
        j++;
    }
}
#include<iostream>

using namespace std;

// int main(){
//     int input[10], temp[10];
//     int result=0;

//     for (int i = 0; i < 10; i++) {
//         cin >> input[i];
//         temp[i] = input[i]%42;
//     }

//     for (int i = 0; i < 10; i++) {
//         int cnt = 0;
        
//         //부르트포스 알고리즘 : 전부 다 비교하기
//         for (int j = i+1; j < 10; j++) {
//             if (temp[i] == temp[j]) {
//                 cnt++;
//             }
//         }
//         if (cnt == 0) {
//             result++;
//         }
//     }
//     cout << result;
// }

int main(){
    bool check[42] = {false};
    int mod, input, result=0;

    for (int i = 0; i < 10; i++) {
        cin >> input;

        mod = input%42;
        if (check[mod] == false) {
            check[mod] = true;
            result++;
        }
    }
    cout << result;
}
#include<stdio.h>

#include<iostream>
using namespace std;


// 처음 시도
// int main(){
//     int m, n;
//     int min=0, sum=0;

//     scanf("%d\n%d", &m, &n);

//     for (int i = m; i <= n; i++){
//         for (int j = 2; j <= n; j++) {
//             if(i%j==0)
//                 break;
            
//             if(j==i-1){
//                 sum+=i;
//                 if(min==0)
//                     min = i;
//             }
//         }
//         if(i==2){
//             sum+=i;
//             min=i; 
//         }
//     }
//     if(min!=0){
//             printf("%d\n%d", sum, min);
//     }else{
//         printf("-1");
//     }
// }


// 향상된 코드
void primenumber(int m, int n){
    int sum=0;
    int min = 0;
    bool isPrime[10001] = {false};
    for (int i = 2; i <= n; i++) {
        isPrime[i] = true;    
    }
    
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false; 
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if (isPrime[i]) {
            sum += i;
            if(min == 0) min = i;
        }
    }

    if (min != 0) {
        cout << sum << "\n" << min;
    }else{
        cout << -1;
    }
    
}

int main(){
    int m, n;
    cin >> m >> n;
    primenumber(m, n);
}
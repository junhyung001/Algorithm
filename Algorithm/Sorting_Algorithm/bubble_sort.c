#include<stdio.h>

// int main(){
//     int index, temp, min;
//     int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 9 - i; j++) {
//             if (arr[j]>arr[j+1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (int k = 0; k < 10; k++) {
//         printf("%d ", arr[k]);
//     }
    
//     return 0;
// }

int main(){
    // 변수 선언
    int temp;
    int n;
    int arr[1000];

    // 입력
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n-j-1; k++) {
            if (arr[k]>arr[k+1]) {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }   
        }
    }
    for (int l = 0; l < n; l++){
        printf("%d ", arr[l]);
    }
}
#include<stdio.h>

int main(){
    int t, n, k;
    int arr[15][15];
    for (int i = 0; i < 15; i++) {
        arr[0][i] = i;
    }
    for (int i = 0; i < 15; i++) {
        arr[i][0] = 0;
    }
    
    for (int j = 1; j < 15; j++) {
        for (int l = 1; l < 15; l++) {
            arr[j][l] = arr[j-1][l]+arr[j][l-1];
            printf("%8d ", arr[j][l]);
        }
        printf("\n");
    }

    scanf("%d", &t);
    for (int m = 0; m < t; m++) {
        scanf("%d", &n);
        scanf("%d", &k);
        printf("%d\n", arr[n][k]);
    }
}
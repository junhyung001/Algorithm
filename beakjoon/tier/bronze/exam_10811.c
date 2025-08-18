#include<stdio.h>

void swap(int arr[], int start, int end){
    int temp;
    int l = start;
    int r = end;
    for (int i = 1; i <= (end-start+1)/2; i++) {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        r--;
        l++;
    }
}

int main(){
    int n, m;
    int i, j;
    int arr[101];

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }
    
    for (int k = 1; k <= m; k++) {
        scanf("%d %d", &i, &j);
        swap(arr, i, j);
    }
    for (int l = 1; l <= n; l++) {
        printf("%d ", arr[l]);
    }
}
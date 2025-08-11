#include<stdio.h>

int arr[100000];

void swap(int i, int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){
    int n, m;
    int a, b;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    for (int j = 1; j <= m; j++) {
        scanf("%d %d", &a, &b);
        swap(a, b);
    }

    for (int k = 1; k <= n; k++){
        printf("%d ", arr[k]);
    }

}
#include<stdio.h>

void sort(int arr[], int size){
    int min, index, temp;

    for (int i = 0; i < size; i++) {
        min = -1;
        for (int j = i; j < size; j++) {
            if (min < arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main(){
    int n, m;
    int arr[1000];

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, n);
    printf("%d", arr[m-1]);
}
#include<stdio.h>

void sort(int arr[]){
    int min, temp, index;

    for (int i = 0; i < 5; i++) {
        min = 99999;
        for (int j = i; j < 5; j++) {
            if (min > arr[j]) {
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
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr);
    printf("%d\n%d", sum/5, arr[2]);
}
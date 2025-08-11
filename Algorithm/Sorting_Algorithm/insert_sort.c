#include<stdio.h>

int main(){
    int j, temp;
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (int i = 0; i < 9; i++) {
        j=i;
        while (arr[j]>arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    for (int k = 0; k < 10; k++) {
        printf("%d ", arr[k]);
    }
}
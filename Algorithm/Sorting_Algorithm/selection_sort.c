#include<stdio.h>

int main(){
    int index, temp, min;
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for (int i = 0; i < 10; i++) {
        //반복 할 때 마다 최소값을 찾아야되기 때문
        min = 9999;
        for (int j = i; j < 10; j++) {
            if(min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        // 스왑
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;   
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);

    }
    return 0;
}
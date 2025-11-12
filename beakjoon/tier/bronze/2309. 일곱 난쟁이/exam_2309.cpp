#include<iostream>
using namespace std;

void sort(int arr[], int size){
    int temp, min, index;
    for (int i = 0; i < size; i++) {
        min = 9999;
        index = i;
        for (int j = i; j < size; j++) {
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


void find(int arr[], int size, int sum){
    for (int i = 0; i < size-1; i++) {
        for (int j = 1; j < size; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                for (int k = 0; k < size; k++) {
                    if (k != i && k != j) {
                        cout << arr[k] << endl;
                    }
                }
                return;
            }
        }
    }
}


int main(){
    int arr[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, 9);
    find(arr, 9, sum);
}
#include <stdio.h>

int N, K;

int bubble_sort(int arr[]) {
    int count = 0;
    int temp;

    // 오름차순 정렬
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            // swap
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
                if (count == K) {
                    printf("%d %d", arr[j], arr[j+1]);
                    return 0;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int arr[100000];

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    if (bubble_sort(arr) == -1) {
        printf("-1");
    }
}
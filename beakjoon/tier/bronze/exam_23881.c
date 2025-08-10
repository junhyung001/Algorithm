#include<stdio.h>

int N, K;

//정렬
int selection_sort(int arr[]){
    int count=0;

    //arr[1..N]을 오름차순 정렬한다.
    for (int i = N-1; i > 0; i--) {
        int max_index = i;
        
        // 가장 큰 수 arr[i]를 찾는다.
        for (int j = 0; j < i; j++) {
            if (arr[j]>arr[max_index]) {
                max_index = j;
            }
        }
        
        // max_index가 i와 다르면 arr[max_index]와 arr[i]를 교환
        if (max_index != i) {
            int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
            count++;
            if (count==K) {
                printf("%d %d", arr[max_index], arr[i]);
                return 0;
            }
            
        }
    }
    return -1;
}

int main(){
    int arr[100000];
    
    //입력
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    
    //출력
    if(selection_sort(arr) == -1) printf("-1\n");
}
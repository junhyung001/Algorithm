#include<stdio.h>

int main(){
    int arr[5];
    int cnt=0;

    //입력
    for (int k = 0; k < 5; k++) {
        scanf("%d", &arr[k]);
    }
    

    //1부터 ∞까지 반복
    for (int i = 1; ; i++) {
        
        // 배수 체킹
        for (int j = 0; j < 5; j++) {
            // i를 어레이 로 나눠서 0이면 배수
            if (i%arr[j]==0) {
                cnt++;
            }
        }

        // 적어도 3번 체크
        if (cnt >= 3) {
            printf("%d", i);
            break;
        }
        // 3번이 아닌경우 카운트 초기화
        else{
            cnt = 0;
        }
    }
}
#include<stdio.h>

int main(){
    int n, l, d;
    int res=0, time=0;

    scanf("%d %d %d", &n, &l, &d);

    // 총 노래 만큼 반복
    for (int i = 1; i <= n; i++) {

        // 한곡을 들을때의 소모 시간
        for (int t = 1; t <= l; t++) time++;

        // 5초간 조용히 할 시간
        for (int j = 1; j <= 5; j++) {
            // 시간을 벨소리로 나눴을때 동일하다 출력~
            if ((time%d)==0) {
                res = time;

                // 분기를 잘 이해하자? break가 작동한 반복문은 j반복문, 우리가 탈출하고 싶은 루프는 i라는 것.
                i = n;
                break;
            }
            time++;
        }

        // 앨범 노래가 끝난 경우의 수를 체킹
        if (i == n && res == 0) {
            
            // 왜 반복? 앨범이 끝났는데 여기서 벨이 d초에 한번 울려서 일치하면 종료.
            while (1) {
                if ((time%d)==0) {
                    res = time;
                    break;
                }
                time++;
            }
        }
    }
    printf("%d", res);
    
}
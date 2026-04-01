#include<stdio.h>

int main(){
    int a, b, c, ans;

    scanf("%d %d %d", &a, &b, &c);

    if (b >= c){
         ans = -1;
    }else{
        ans = a / (c-b) + 1;    
    }
    printf("%d", ans);
}
// 고정비용 1000
// 가변비용 70
// 판매비용 170
// 고정비용 / (판매비용 - 가변비용) +1;
// 가변비용 >= 판매비용 : -1 ___ 수익이 발생할 수 없음.
#include<stdio.h>

int main(){
    int n;
    int temp;
    int cnt = 0;
    scanf("%d", &n);

    temp = n;
    while (1){
        temp = temp%10*10 + (temp/10 + temp%10)%10;
        cnt++;

        if(temp == n)
            break;
    }
    printf("%d", cnt);
}
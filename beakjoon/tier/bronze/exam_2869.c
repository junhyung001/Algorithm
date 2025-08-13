#include<stdio.h>

int main(){
    int a, b, v;
    int day = 1;
    scanf("%d %d %d", &a, &b, &v);

    day += (v-a) / (a-b);
    if((v-a) % (a-b)) printf("%d", day+1);
    else printf("%d", day);
    return 0;
}
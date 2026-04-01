#include<stdio.h>

int main(){
    int n;
    int cnt=1, layer=1;
    scanf("%d", &n);

    while (n > cnt) {
        cnt += 6*layer;
        layer++;
    }   
    printf("%d", layer);
}
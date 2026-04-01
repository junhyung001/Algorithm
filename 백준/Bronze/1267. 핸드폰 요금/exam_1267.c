#include<stdio.h>

int main(){
    int n, y=0, m=0;
    int temp;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        y += 10 * (temp/30+1);
        m += 15 * (temp/60+1);
    }
    if(y == m){
        printf("Y M %d", y);
    }else if (y<m) {
        printf("Y %d", y);
    }else{
        printf("M %d", m);
    }
}
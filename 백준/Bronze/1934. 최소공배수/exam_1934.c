#include<stdio.h>

int lcm(int n, int m){
    while (m!=0) {
        int temp = m;
        m = n%m;
        n = temp;
        printf("n = %d m = %d\n",n, m);
    }
    return n;
}

int main(){
    int n, m, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", n*m/lcm(n, m));
    }
}
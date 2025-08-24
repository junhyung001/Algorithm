#include<stdio.h>

int main(){
    int n, k;
    int cnt = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        if (n%i==0) {
            cnt++;
        }
        if (cnt == k) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}
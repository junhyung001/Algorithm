#include<stdio.h>

int main() {
    int n;
    int a;
    int res = 0;
    int cnt = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a); 

        for (int j = 1; j <= a; j++) {
            if (a % j == 0) 
                cnt++;
        }
        if (cnt == 2) {
            res++;
        }
        cnt = 0;
    }
    printf("%d\n", res);

    return 0;
}
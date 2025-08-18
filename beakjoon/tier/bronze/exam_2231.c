#include<stdio.h>

int main(){
    int n;
    int result = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp/=10;    
        }
        
        if (sum == n) {
            result = i;
            break; 
        }
    }
    printf("%d", result);
}
#include<stdio.h>

int GCD(int n, int m){
    while (m !=0) {
        int temp = m;
        m = n%m;
        n = temp;
    }
    return n;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int gcd = GCD(n, m);
    int lcm = n*m/GCD(n, m); 

    printf("%d\n%d", gcd, lcm);
}
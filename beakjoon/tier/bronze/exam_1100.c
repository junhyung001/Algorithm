#include<stdio.h>

int main(){
    char arr[64][64];
    int cnt = 0;
    

    for (int i = 0; i < 8; i++) {
       	scanf("%s", arr[i]);
	}
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i+j)%2==0 && arr[i][j]=='F') {
                cnt++;
            }
        }
    }   
    printf("%d", cnt);

    return 0;
}
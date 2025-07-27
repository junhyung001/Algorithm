#include<stdio.h>

int main(){
    int arr;
    int max = -1;
    int x, y;

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            scanf("%d", &arr);

            if(arr>= max){
                max = arr;
                x=i;
                y=j;
            }
        }
    }
    printf("%d\n %d %d", max, x, y);
}
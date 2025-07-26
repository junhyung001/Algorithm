#include<stdio.h>

int main(){
    char str[5][15] = {0};
    
    for(int i=0; i<5; i++){
        scanf("%s", str[i]);
    }

    for (int  j = 0; j < 15; j++)
    {
        for(int k=0; k<5; k++){
            if(str[k][j] != '\0'){
                printf("%c", str[k][j]);
            }
        }
    }
    return 0;
}
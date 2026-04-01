#include<stdio.h>
#include<string.h>

int main(){
    char arr[100000];

    while (1) {
        scanf("%s", arr);

        if (strcmp(arr, "0")==0) {
            break;
        }

        char temp[100000];
        int len = strlen(arr);

        for (int i = 0; i < len; i++) {
            temp[i] = arr[len - 1 - i];
        }
        temp[len] = '\0';
        
        if (strcmp(arr, temp) == 0) {
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
}
#include<stdio.h>
#include<string.h>

char Vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

int check_include_Vowel(char* arr){
    int cnt=0;

    for (int i = 0; i < strlen(arr); i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i] == Vowel[j]) {
                cnt++;
            }
        }
    }
    return cnt;
    
}

int main(){
    char str[256];

    while (1) {
        scanf("%[^\n]", str);
        getchar();
        if (strcmp(str, "#")==0) {
            break;
        }
        printf("%d\n", check_include_Vowel(str));
    }
}
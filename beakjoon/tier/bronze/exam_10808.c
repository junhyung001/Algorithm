#include<stdio.h>

int main(){
    char a[100];
    int cnt[26]={0};
    scanf("%s", a);
    
    for (int i = 0; a[i]!='\0'; i++) {
        if(a[i]>='a'&&a[i]<='z'){
            cnt[a[i]-'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", cnt[i]);
    }
}
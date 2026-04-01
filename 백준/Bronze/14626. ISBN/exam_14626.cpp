#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    string str;
    int sum=0;
    cin>>str;
    int idx = str.find("*");
    
    for (int i = 0; i < 10; i++) {
        sum=0;
        str[idx] = i+'0';
        for(int j=0; j<13; j++){
            if(j%2==1){
                sum += (str[j]-'0')*3;
                continue;
            }
            sum += (str[j]-'0');
        }
        if(sum%10==0){
            cout << str[idx];
            return 0;
        }
    }
}
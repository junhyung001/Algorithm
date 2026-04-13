#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str;
    int zero_count=0;
    int one_count=0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            zero_count++;
        }else{
            one_count++;
        }
    }

    one_count /= 2;
    zero_count /= 2;
    for (int i = 0; i < zero_count; i++) {
        cout << "0";
    }
    for (int i = 0; i < one_count; i++) {
        cout << "1";
    }
}
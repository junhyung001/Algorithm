#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(string str1, string str2){
    if (str1.length() == str2.length())
        return str1 < str2;
    else
        return str1.length() < str2.length();
}

int main(){
    int n;
    string str[20000];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str+n, cmp);

    for (int i = 0; i < n; i++) {
        if (i > 0 && str[i] == str[i-1]) {
            continue;
        }
        cout << str[i] << "\n";
    }

}
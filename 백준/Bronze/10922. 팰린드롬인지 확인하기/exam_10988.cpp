#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string input;
    cin >> input;
    
    string rev = input;
    reverse(rev.begin(), rev.end());

    if(input == rev){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
}
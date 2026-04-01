#include<iostream>
#include<string>

using namespace std;

int main(){
    string input;
    while (true) {
        cin >> input;
        if (input == "0") break;
        string rev = input;
        reverse(rev.begin(), rev.end());

        if(input == rev){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
}
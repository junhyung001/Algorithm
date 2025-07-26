#include<iostream>
#include<string>
using namespace std;

char Vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

int check_include_Vowel(string s){
    int num=0;
    bool found;

    //문자열 크기만큼 반복하면서 모음이 포함되어있는지 확인
    for(int i=0; i< s.size(); i++){
        for(int j=0; j<10; j++){
            if (s[i] == Vowel[j]){
                ++num;
            }
        }
    }
    return num;
}

int main(){
    string input;

    while (true){
        getline(cin, input);
        if(input == "#")  break;        
        cout << check_include_Vowel(input) << endl;
    }
}
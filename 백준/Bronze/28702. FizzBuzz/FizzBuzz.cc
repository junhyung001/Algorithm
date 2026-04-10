#include<iostream>
#include<string>
using namespace std;

void print(int n){
    if (n %3 == 0 && n % 5 == 0) {
        cout << "FizzBuzz";
    }else if(n%3==0 && !(n%5==0)){
        cout << "Fizz";
    }else if( !((n%3==0)) && n%5==0){
        cout << "Buzz";
    }else{
        cout << n;
    }
    
}

int main(){
    string str1, str2, str3;

    cin >> str1;
    cin >> str2;
    cin >> str3;

    if (str3 != "FizzBuzz" && str3 != "Fizz" && str3!="Buzz") {
        print(stoi(str3)+1);
    }else if(str2 != "FizzBuzz" && str2 != "Fizz" && str2 != "Buzz"){
        print(stoi(str2)+2);
    }else{
        print(stoi(str1)+3);
    }
}
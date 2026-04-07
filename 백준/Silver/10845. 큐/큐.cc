#include<iostream>
using namespace std;
int q[10000];
int r=0;
int f = 0;

int empty(){
    return f == r;
}

void push(int x){
    q[r++] = x;
}

void pop(){
    if (empty()) {
        cout << -1 << "\n";
    }else{
        cout << q[f++]<< "\n";
    }
}

void size(){
    cout << r-f << "\n";
}

void front(){
    if (empty()) {
        cout << -1 << "\n";
    }else{
        cout << q[f] << "\n";
    }
    
}

void back(){
    if (empty()) {
        cout << -1 << "\n";
    }else{
        cout << q[r-1] << "\n";
    }
    
}

int main(){
    int n;
    int input;
    cin >> n;
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> input;
            push(input);
        }else if (str == "pop") {
            pop();
        }else if (str == "size"){
            size();
        }else if (str == "empty"){
            cout << empty() << "\n";
        }else if(str == "front"){
            front();
        }else if(str == "back"){
            back();
        }
    }
}
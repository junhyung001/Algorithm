#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    int check=0;
    string stitle;

    cin >> n;

    for (int title = 666; ; title++) {
        stitle = to_string(title);

        if (stitle.find("666") != -1) {
            check++;
            if (n == check) {
                cout << title;
                break;
            }
        }
    }
    return 0;
}
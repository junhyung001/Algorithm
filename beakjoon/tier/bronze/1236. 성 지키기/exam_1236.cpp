#include<iostream>
using namespace std;

int main(){
    char arr[50][50];
    int n, m;
    int countR=0, countC=0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }        
    }

    // Row checking
    for (int i = 0; i < n; i++) {
        int emptycount=0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 'X') {
                emptycount++;
            }
            
        }
        if (emptycount == m) { 
            countR++;
        }
    }

    // Column Checking
    for (int i = 0; i < m; i++) {
        int emptycount=0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] != 'X') {
                emptycount++;
            }
        }
        if (emptycount == n) {
            countC++;
        }
    }

    if (countC < countR) cout << countR;
    else cout << countC;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    int x[200], y[200];
    int rank[50];
    
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++) {
        rank[i]=1;
        for (int j = 0; j < n; j++) {
            
            if (i == j) continue;

            if (x[j] > x[i] && y[j] > y[i]) {
                rank[i]++;
            }   
        }
    }

    for (int i = 0; i < n; i++) {
        cout << rank[i] << " ";
    }
}
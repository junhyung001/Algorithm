#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<double> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << fixed << setprecision(3);
    for (int i = 0; i < 7; i++) {
        cout << a[i] << "\n";
    }
    
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a.begin()+1, a.end());

    for (int i = 1; i < n; i++) {
        if (a[0] > a[i] ){
            a[0] += a[i];
        }else{
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
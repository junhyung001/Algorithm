#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int sum =0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    //처음부터 k까지일까지
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    int ans = sum;

    for (int i = k; i < n; i++) {
        sum = sum - a[i-k] + a[i];
        ans = max(ans, sum);
    }
    cout << ans;

    
}
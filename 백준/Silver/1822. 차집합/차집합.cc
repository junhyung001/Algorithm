#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    int cnt=0;

    cin >> a >> b;

    vector<int> n(a);
    vector<int> m(b);

    for (int i = 0; i < a; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> m[i];
    }

    vector<int> k;
    
    sort(n.begin(), n.end());
    sort(m.begin(), m.end());

    for (int i = 0; i < a; i++) {
        if(!binary_search(m.begin(), m.end(), n[i])){
            k.push_back(n[i]);
        }
    }

    cout << k.size() << "\n";
    for (int x : k) {
        cout << x << " ";
    }
    
}
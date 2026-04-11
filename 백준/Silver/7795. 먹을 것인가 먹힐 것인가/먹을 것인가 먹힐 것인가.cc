#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    
    // 테스트 케이스 안에서 입려받기~!!
    for (int i = 0; i < t; i++) {
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < m; i++) {
            int left = 0;
            int right = n - 1;
            int answer=n;
            
            while (left <= right) {
                int mid = (left + right) / 2;
                if (a[mid] > b[i]) {
                    answer = mid;
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            count += (n-answer);
        }
        cout << count << "\n";
    }
}
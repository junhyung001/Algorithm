#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt=0;
    vector<int> a(n);
    

    // 입력
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (true) {

        // 내림차순 정렬
        // 내림차순으로 정렬하고 가장 큰 값 2개가 0보다 크면 실제 값을 감소
        sort(a.begin(), a.end(), greater<int>());


        // 해당 위치도 중요;;
        //  0 0 5면 어칼꺼임;;; 정렬하고 0번째 인덱스값이 0인지 비교
        if(a[0] == 0) break;

        // n 이 1보다 큰 경우에는 값이 하나이기 때문에 그냥 0번째 인덱스의 값을 1씩 감소하면 되는 것
        if (n>=2 && a[1] > 0) {
            a[0]--;
            a[1]--;
        } else {
            a[0]--;
        }
        cnt ++;
    }

    if (cnt > 1440) {
        cout << -1;
    } else{
        cout << cnt;
    }
}
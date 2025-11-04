#include<iostream>
using namespace std;

int main(){
    int n, l, d;
    int res = 0, time = 0;

    cin >> n >> l >> d;

    for (int i = 1; i <= n; i++) {
        for (int t = 0; t < l; t++) time++;

        for (int j = 1; j <= 5; j++) {
            if ((time%d)==0) {
                res = time;

                i = n;
                break;
            }
            time++;
        }

        if (i==n && res == 0) {
            while (1) {
                if ((time % d) ==0) {
                    res = time;
                    break;
                }
                time++;
            }
        }
    }
    cout << res;

}
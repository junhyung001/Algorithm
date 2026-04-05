#include <iostream>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    int bestBurger = 0;

    // 햄벅 하나도 못먹으면 t분
    int bestCola = t; 

    // 0부터 t까지 증가
    // 타워버거
    for (int i = 0; i <= t; i++) {

        // 타워버거 i개 먹는데 걸리는 시간은 i*n
        if (i * n > t) break;


        // 타워버거 i개를 먹고 남은 시간 계산하기
        int remain = t - i * n;

        //총 햄버거 수 계산
        int burger = i + (remain / m);

        //콜라 버억
        int cola = remain % m;

        // 더 좋은 경우면 갱신
        if (cola < bestCola) {
            bestCola = cola;
            bestBurger = burger;
        }
        // 
        else if (cola == bestCola && burger > bestBurger) {
            bestBurger = burger;
        }
    }

    cout << bestBurger << " " << bestCola;
}
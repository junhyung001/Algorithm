#include<stdio.h>

// n - 세로(열)
// m - 가로(행)
// 1. 입력
// 2. 행비교
// 3. 열비교
//  3-1. 행비교 완료된 경우는 break;
// 4. 출력
int main(){
    char arr[50][50];
    int n, m, countR=0, countC=0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    // Row 비교
    for (int i = 0; i < n; i++) {
        int emptycount=0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 'X') {
                emptycount++;
            }
        }
        if (emptycount==m) {
            countR++;
        }
    }

    // Colum 비교
    for (int i = 0; i < m; i++) {
        int emptycount=0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] != 'X') {
                emptycount++;
            }else{
                break;
            }
        }
        if (emptycount==n) {
            countC++;
        }
    }
    if (countR < countC) {
        printf("%d", countC);
    }else{
        printf("%d", countR);
    }
    
}
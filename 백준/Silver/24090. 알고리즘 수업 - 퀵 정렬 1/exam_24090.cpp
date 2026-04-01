#include <iostream>
using namespace std;
int arr[100001];
int k;
int cnt = 0;


int partition_custom(int arr[], int p, int r) {
    int x = arr[r]; // 기준원소
    int i = p - 1;  // i는 x보다 작거나 작은 원소들의 끝지점
    int temp;

    for (int j = p; j <= r - 1; j++) {
        if (arr[j] <= x) {
            temp = arr[++i];
            arr[i] = arr[j];
            arr[j] = temp;
            ++cnt;
            if (cnt == k) {
                cout << arr[i] << " " << arr[j] << endl;
                exit(0);
            }
        }
    }

    if (i + 1 != r) {
        temp = arr[i + 1];
        arr[i + 1] = arr[r];
        arr[r] = temp;
        ++cnt;
        if (cnt == k) {
            cout << arr[i + 1] << " " << arr[r] << endl;
            exit(0);
        }
    }

    return i + 1;
}

void quick_sort(int arr[], int p, int r) {
    if (p < r) {
        int q = partition_custom(arr, p, r); // 분할
        quick_sort(arr, p, q - 1);           // 왼쪽 부분 배열 정렬
        quick_sort(arr, q + 1, r);           // 오른쪽 부분 배열 정렬
    }
}

int main() {
    int n;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    cout << -1;
    return 0;
}
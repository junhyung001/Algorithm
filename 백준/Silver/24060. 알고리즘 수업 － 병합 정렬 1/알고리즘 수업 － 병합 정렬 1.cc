#include<iostream>
using namespace std;
void merge(int A[], int p, int q, int r);
void merge_sort(int A[], int p, int r);

int A[500001];
int temp[500001];
int t_count = 0;
int result = -1;
int n, k;
int main(){
    
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    merge_sort(A, 0, n-1);
    if (t_count<k){
        cout << -1;
    }
    
}

void merge_sort(int A[], int p, int r){
    if (p < r) {
        int q = ((p+r)/2);
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}

void merge(int A[], int p, int q, int r){
    int i = p;
    int j = q+1;
    int t = 1;

    while (i<=q && j<= r){
        if(A[i] <= A[j]) temp[t++] = A[i++];
        else temp[t++] = A[j++];
        
    }
    while (i<=q) {
        temp[t++] = A[i++];
    }while (j<=r) {
        temp[t++] = A[j++];
    }

    i=p;
    t=1;
    while (i<=r) {
        A[i++] = temp[t++];
        if (++t_count == k) {
            cout << temp[t-1];
        }   
    }
}
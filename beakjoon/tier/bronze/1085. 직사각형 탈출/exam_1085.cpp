// 백준 1085
// 직사각형 탈출

#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

// int main(){
//     int x, y, w, h;
//     int w_min, h_min;

//     scanf("%d %d %d %d", &x, &y, &w, &h);

//     if (x < w-x)
//         w_min = x;
//     else
//         w_min = w-x;
//     if (y < h-y)
//         h_min = y;
//     else
//         h_min = h-y;
    
//     if(w_min < h_min)
//         printf("%d", w_min);
//     else
//         printf("%d", h_min);
// }

int main(){
    int x, y, w, h;

    cin >> x >> y >> w >> h;
    cout << min({x, y, h-y, w-x});
}
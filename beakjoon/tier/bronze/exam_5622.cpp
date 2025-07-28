#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

// int main(){
//     char str[16];
//     int time = 0;
//     scanf("%s", str);

//     for (int i = 0; str[i] != NULL; i++) {
//         if(str[i]=='A' || str[i]=='B' || str[i]=='C'){
//             time +=3;
//         }else if(str[i]=='D'||str[i]=='E'||str[i]=='F'){
//             time += 4;
//         }else if(str[i]=='G'||str[i]=='H'||str[i]=='I'){
//             time+=5;
//         }else if(str[i]=='J'||str[i]=='K'||str[i]=='L'){
//             time += 6;
//         }else if(str[i]=='M'|| str[i]=='N' || str[i]=='O'){
//             time+=7;
//         }else if(str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S'){
//             time += 8;
//         }else if(str[i]=='T'||str[i]=='U'||str[i]=='V'){
//             time += 9;
//         }else if(str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z'){
//             time+=10;
//         }else{
//             time+=11;
//         }
//     }
//     printf("%d", time);
// }

// int main(){
//     char str[16];
//     int time = 0;
//     scanf("%s", str);

//     for (int i = 0; str[i] != '\0'; i++) {
//         if(str[i] >= 'A' && str[i] <= 'C') time += 3;
//         else if(str[i] >= 'D' && str[i] <= 'F') time += 4;
//         else if(str[i] >= 'G' && str[i] <= 'I') time += 5;
//         else if(str[i] >= 'J' && str[i] <= 'L') time += 6;
//         else if(str[i] >= 'M' && str[i] <= 'O') time += 7;
//         else if(str[i] >= 'P' && str[i] <= 'S') time += 8;
//         else if(str[i] >= 'T' && str[i] <= 'V') time += 9;
//         else if(str[i] >= 'W' && str[i] <= 'Z') time += 10;
//     }
//     printf("%d", time);
// }

// #include<iostream>
// #include<string>
// #include<stdio.h>

// int main(){
//     char str[16];
//     int time = 0;
//     scanf("%s", str);

//     for (int i = 0; str[i] != NULL; i++) {
//         if(str[i]=='A' || str[i]=='B' || str[i]=='C'){
//             time +=3;
//         }else if(str[i]=='D'||str[i]=='E'||str[i]=='F'){
//             time += 4;
//         }else if(str[i]=='G'||str[i]=='H'||str[i]=='I'){
//             time+=5;
//         }else if(str[i]=='J'||str[i]=='K'||str[i]=='L'){
//             time += 6;
//         }else if(str[i]=='M'|| str[i]=='N' || str[i]=='O'){
//             time+=7;
//         }else if(str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S'){
//             time += 8;
//         }else if(str[i]=='T'||str[i]=='U'||str[i]=='V'){
//             time += 9;
//         }else if(str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z'){
//             time+=10;
//         }else{
//             time+=11;
//         }
//     }
//     printf("%d", time);
// }

int main(){
    string str;
    cin >> str;
    
    int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 }; // 시간 배열
    int result = 0;

    for (int i = 0; str[i] != NULL; i++) {
        result += time[str[i]-'A'];
    }
    cout << result << endl;
}
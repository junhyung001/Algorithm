#include<stdio.h>

int main() {
    int month, day;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    char *week[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int total_days = 0;

    scanf("%d %d", &month, &day);
    for(int i=0; i<month; i++){
        total_days+=days[i];
    }

    total_days += day;
    printf("%s\n", week[total_days%7]);
}
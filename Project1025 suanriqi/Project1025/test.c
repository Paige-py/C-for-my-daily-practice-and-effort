#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int y;
    int m;
    int d;
    scanf("%d/%d/%d", &y, &m, &d);
    int d2;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        d2 = 29;
    }
    else {
        d2 = 28;
    }
    int total = 0;
    switch (m) {
    case 12:total += 30;
    case 11:total += 31;
    case 10:total += 30;
    case 9:total += 31;
    case 8:total += 31;
    case 7:total += 30;
    case 6:total += 31;
    case 5:total += 30;
    case 4:total += 31;
    case 3:total += d2;
    case 2:total += 31;
    case 1:break;






    }
    total+= d;
    printf("%d", total);













    return 0;
}
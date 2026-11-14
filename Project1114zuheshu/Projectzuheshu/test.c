#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double fact(int m, int n) {
    int i = 1;
    double x = 1;
    double y = 1;
    double z = 1;
    for (i = 1; i <= n; i++) {
        x = x * i;
    }
    for (i = 1; i <= m; i++) {
        y = y * i;
    }
    for (i = 1; i <= n - m; i++) {
        z = z * i;
    }
    double s = x / (y * z);
    return s;
}

int main() {
    int m;
    int n;
    double s;
    scanf("%d %d", &m, &n);
    s = fact(m, n);
    printf("result = %.0f", s);
    return 0;
}
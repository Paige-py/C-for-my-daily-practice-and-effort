#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void input(int x[13], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
}
void cmp(int y[14], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (y[i] == 1) {
            printf("No\n");
            continue;
        }
        for (int j = 2; j <= y[i] / j; j++) {
            if (y[i] % j == 0) {
                s = 1;
                printf("No\n");
                break;
            }
            else {
                s = 0;
            }
        }

        if (s == 0) {
            printf("Yes\n");
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int a[19];
    input(a, n);
    cmp(a, n);
    return 0;
}
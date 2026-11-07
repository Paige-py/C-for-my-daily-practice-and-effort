#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[10];
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int t;
	int j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}





	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	














	return 0;
}
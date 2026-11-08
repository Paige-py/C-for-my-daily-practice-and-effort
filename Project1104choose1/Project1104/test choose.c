#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[10];
	int max = 0;
	int i;
	int t;
	for (i = 0; i < n; i++) {

		scanf("%d", &a[i]);

		if (a[i] > a[max]) {
			max = i;
		}

	}
	t = a[0];
	a[0] = a[max];
	a[max] = t;
	for (i = 0; i < n; i++) {

		printf("%d ", a[i]);

	}

	return 0;
}
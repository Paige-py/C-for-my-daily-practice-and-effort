#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i;
	int j;
	int max;
	int a[10];
	int t;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n-1; i++) {
		max = i;
		for (j = i+1; j < n; j++) {
			if (a[j] > a[max]) {
				max = j;
			}
		}
		if (max != i) {
			t = a[max];
			a[max] = a[i];
			a[i] = t;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}














return 0;
}
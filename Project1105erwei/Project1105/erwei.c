#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	int y;
	scanf("%d", &y);
	int a[5][6];
	int i;
	int j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			scanf("%d", &a[i][j]);
		}

	}
	int max ;
	int l = 0;
	int t;
	int m;
	for (i = 0; i < x; i++) {
		max = 0;

		for (j = 1; j < y; j++) {
			if (a[i][j] > a[i][max]) {
				max = j;


			}
		}
		if (max != 0) {
			t = a[i][0];
			a[i][0] = a[i][max];
			a[i][max] = t;

		}
		if (a[i][0] > a[l][0]) {
			l = i;
		}
	}
	if (l!=0) {
		m = a[0][0];
		a[0][0] = a[l][0];
		a[l][0] = m;


	}
	printf("%d", a[0][0]);











	return 0;
}
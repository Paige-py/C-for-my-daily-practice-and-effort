#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void intput(int x[30],int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
}
void output(int y[30], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", y[i]);
	}
}
 void cmp(int z[30], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (z[i] > z[max]) {
			max = i;
		}
	}
	printf("\n%d\n",z[max]);
}
 void choose(int s[30], int n) {
	 int t = 0;
	 for (int i = 0; i < n; i++) {
		 if (s[i] == 58) {
			 t = 1;
			 break;
		 }
	 }
	 if (t == 1) {
		 printf("Yes\n");
	 }
	 else {
		 printf("No\n");
	 }
 }
int main() {
	int n;
	scanf("%d", &n);
	int a[30];
	int b[30];
	intput(a,n);
	intput(b,n);
	output(a, n);
	output(b, n);
	cmp(a, n);
	cmp(b, n);
	choose(a, n);
	choose(b, n);






	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i;
	int j;
	for (i = 1; i <= 9; i++) {
		j = 9;
		while (j >= 1 && j >= i) {
			printf("%2d*%2d=%2d",i,j,i*j);
			j--;
		}
		printf("\n");
	}








	return 0;
}
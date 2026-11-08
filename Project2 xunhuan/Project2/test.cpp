#include<stdio.h>
int main() {
	int sum = 0;

	for (int i = 1;i < 1000;i++){
		if (i < 1000 && i % 77 == 0) {

			printf("%d \n", i);
			sum += i;
		}
		
		


	}
	
			printf("%d", sum);
	
		
	return 0;
}
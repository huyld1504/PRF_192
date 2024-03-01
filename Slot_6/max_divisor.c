#include<stdio.h>
#include<stdlib.h>

int main () {
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	int divisor_max;
	
//	for (i = 1; i <= a || i <= b; i++){
//		if (a % i == 0 && b % i == 0) {
//			divisor_max = i;
//		}
//	}

	for (i = a; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			divisor_max = i;
		}
	}
	
	printf("%d", divisor_max);
	
	return 0;
}

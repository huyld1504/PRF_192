#include<stdio.h>
//#include<stdlib.h>

int main () {
	int n, i;
//	float i;
	scanf("%d", &n);
	
	float sum = 0;
	
	for (i = 1; i <= n; i ++){
		sum += i / (float)(i + 1);
	}
	
	printf("%.2f", sum);
	
	return 0;
}

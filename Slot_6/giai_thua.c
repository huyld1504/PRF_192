#include<stdio.h>
#include<stdlib.h>

int main () {
	int n, k; 
	int result = 1;
	scanf("%d", &n);
	
	for (k = 1; k <= n; k++)
	result *= k;
	
	printf("%d", result);
	
	return 0;
	
}

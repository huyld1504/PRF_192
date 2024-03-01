#include<stdio.h>

int main() {
	int a,b;
	printf("Nhap a,b:");
	scanf("%d", &a);
	scanf("%d", &b);
	
	int sum = ((b-a+1)*(b+a+1))/4;
	
	printf("Result: %d", sum);
	
	return 0;
} 

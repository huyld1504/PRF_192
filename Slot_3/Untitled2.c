#include<stdio.h>
//Tinh tong tu 1 den n

int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d", &n);
	
	int sum = (n*(n+1))/2;
	printf("Tong la: %d", sum);
	
	return 0;
} 

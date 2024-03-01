#include<stdio.h>

int main () {
//	int a, b;
//	printf("Nhap a va b:");
//	scanf("%d%d", &a, &b);
//	
//	int q = a/b;
//	int r = a%b;
//	printf("Thuong la: %d, du la: %d", q, r);

	float a, b;
	printf("Nhap a va b:");
	scanf("%f%f", &a, &b);
	
	float q = a /b;
	printf("Thuong 2 so thuc a va b la: %2f", q);
	
	return 0;
}

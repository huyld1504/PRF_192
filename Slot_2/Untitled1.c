#include<stdio.h>
//Write a program to input length and width of a rectangle and calculate perimeter and area of the rectangle.
int main () {
	int a, b;
	printf("Nhap chieu dai va chieu rong:");
	scanf("%d%d", &a, &b);
	
	int p = (a+b)*2;
	int s = a*b;
	
	printf("Chu vi va dien tich hcn: %d %d", p, s);
	
	return 0;
}

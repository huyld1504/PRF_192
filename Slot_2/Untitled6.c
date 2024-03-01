#include<stdio.h>
//Write a program that allows input hours, minutes and seconds and convert it to seconds and print the result.

int main () {
	int h,m,s; 
	
	printf("Nhap gio:");
	scanf("%d", &h);
	printf("Nhap phut:");
	scanf("%d", &m);
	printf("Nhap giay:");
	scanf("%d", &s);
	
	int result = ( 3600 * h ) + ( m * 60) + s;
	printf("%d", result);
	return 0;
}

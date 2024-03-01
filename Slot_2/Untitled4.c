#include<stdio.h>
//Write a program to input a positive integer N with 2 digits from the keyboard, output to the screen the sum of the digits of N.

int main () {
	int a;
	printf("Nhap a:");
	scanf("%d", &a);
	
	if (a >= 10 && a <= 99) {
		
		int tens = a / 10;
		int units = a % 10;
		int sum = tens + units;
		
		printf("%d", sum);
	} else {
		printf("So a khong thoa dieu kien");
	}
	
	return 0;
}

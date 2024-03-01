#include<stdio.h>
#include<math.h>

//Write a program to input number of days from user and convert it to years, weeks and days

int main () {
	int input, d, w, y;
	
	printf("Input:");
	scanf("%d", &input);
	
	y = input / 365;
	w = (input - 365 * y) / 7;
	d = input - 365 * y - 7 * w;
	
	printf("%d nam %d tuan %d ngay", y, w, d);
	
	return 0;
}

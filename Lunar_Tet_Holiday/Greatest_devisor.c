//Write a program to input two positive integers a and b. Find the greatest common divisor 
//and least common multiple of a and b.

#include<stdio.h>
#include<math.h>

int main () {
	int a, b, i, greatestDevisor; 
	
	printf("Input: ");
	scanf("%d%d", &a, &b);
	
	for (i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			greatestDevisor = i;
		}
	}
	
	printf("Output: %d", greatestDevisor);
	
	return 0;
}

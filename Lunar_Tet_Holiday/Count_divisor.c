//Write a program to count the number of divisors of a positive integer N.

#include<stdio.h>
#include<math.h>

int main () {
	int n, i, count = 0;
	printf("Input: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n % i == 0) 
			count++;
	}
	
	printf("Output: %d", count);
	
	return 0;
}

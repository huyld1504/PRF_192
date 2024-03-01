#include<stdio.h>
#include<stdlib.h>

int main () {
	int n, d, count = 0, sum = 0;
	scanf("%d", &n);
	
	do {
		d = n % 10;
		
		if (d == 2 || d == 3 || d == 5 || d == 7) 
			count ++;
		sum += d;
		n = n / 10;
	} while (n != 0);
	
	printf("%d %d", count, sum);
	
	return 0;
}

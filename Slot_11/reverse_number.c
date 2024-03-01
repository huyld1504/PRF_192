#include<stdio.h>
#include<math.h>

int count_n (int n) {
	int count = 0, d;
	
	do {
		n = n / 10;
		count ++;
	} while (n != 0);
	
	return count;
}

int reverse_number_n (int n) {
	int count = count_n(n);
	int new_number = 0, d;
	do {
		d = n % 10;
		new_number += d * pow(10, count - 1);
		count = count - 1;
		n = n /10;
	} while (n != 0);
	
	return new_number;
}

int main () {
	int n;
	scanf("%d", &n);
	
	int result = reverse_number_n(n);
	
	printf("%d", result);
	
	return 0;
}

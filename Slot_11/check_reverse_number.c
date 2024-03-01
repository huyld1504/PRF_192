#include<stdio.h>
#include<math.h>

int check_reverse_number (int n) {
	int new_number = 0, d;
	
	do {
		d = n % 10;
		new_number = new_number * 10 + d;
		n = n / 10;
	} while (n != 0);
	
	return new_number;
} 

int check_number (int n) {
	if (check_reverse_number(n) == n) return 1;
	else return 0;
}

int main () {
	int n;
	scanf("%d", &n);
	
	int result = check_number(n);
	
	printf("%d", result);
	
	return 0;
}

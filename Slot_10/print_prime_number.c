#include<stdio.h>
#include<math.h>

//Bai toan: In ra man hinh so nguyen to (prime number) lon nhat co n chu so

int check_prime_number (int n);
int print_prime_number_N (int n);

int main () {
	int n;
	scanf("%d", &n);
	
	int result = print_prime_number_N(n);
	
	printf("%d", result);
	
	return 0;
}

/*
	This function is used for checking the natural number n is prime number or not.
	The result will resond: 1 is true and 0 is false.
*/
int check_prime_number (int n) {
	int i, count = 0;
	
	for (i = 1; i <= n; i++) {		
		if (n % i == 0) {
			count++;
		}
	}
	
	if (count == 2) 
		return 1;
	else 
		return 0;
}

//Print the prime number that is maximum have n digit
int print_prime_number_N (int n) {
	int i, start = pow(10, n -1), end = pow(10, n) - 1, number;
	
	if (n == 1) 
		number = 7;
	else {
		for (i = start; i <= end; i++) {
			int check = check_prime_number(i);
			
			if (check == 1) 
				number = i; 
		}
	}
	
	return number;
}


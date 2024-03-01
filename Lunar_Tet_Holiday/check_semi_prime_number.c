#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
	Calculate the sum of list the first n of semi number:
		Input: 5 => Output: 8.60 (circle 2 decimal digits)
*/

int check_prime_number (int n);
int check_semi_prime_number (int n);
int check_square_number(int n);
float average_sum_semi_prime (int n);
int main () {
	int n;
	printf("Input:");
	scanf("%d", &n);

	float result = average_sum_semi_prime(n);

	printf("Output: %.2f \n", result);
}

//This function is used for checking the natural N is prime number or not.
int check_prime_number (int n) {
	int i, count = 0;

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			count++;
	}

	if (count == 2)
		return 1;
	else
		return 0;
}

//This function is used for checking the initual N is square number or not.
int check_square_number (int n) {
	float d = sqrt(n);
	int f = d, result = 0;

	if (pow(f, 2) == n)
		return 1;
	else
		return 0;
}

//This function is used for checking the natural N is semi prime number or not.
int check_semi_prime_number (int n) {
	int i, raw = 0, part, result = 0;

	if (check_square_number(n) == 1 && check_prime_number((int) sqrt(n)) == 1) {
		return 1;
	} else {
		for (i = 2; i < n && pow(raw, 2) <= n; i ++) {
			raw = n / i;
			part = n % i;

			if (check_prime_number(raw) == 1 && part == 0)
				return 1;
			else
				return 0;
		}
	}
}

//This function is use for calculating the sum average of n first semi prime number.
float average_sum_semi_prime (int n) {
	int i, sum = 0, count = 1;

	for (i = 1; count <= n; i++) {
		if (check_semi_prime_number(i) == 1) {
			sum = sum + i;
			count++;
		}
	}

	float result = (float) sum / n;
	return result;
}


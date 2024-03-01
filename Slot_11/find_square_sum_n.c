#include<stdio.h>
#include<math.h>

int find_sum_n (int n);
int main () {
	int n;
	scanf("%d", &n);

	int result = find_sum_n(n);

	printf("%d", result);

	return 0;
}

//this function is used for to calculate the square digit of the number N. n = 23 => result = 2^2 + 3^2 = 13
int find_sum_n (int n) {
	int lastDigit, sum = 0;

	do {
		lastDigit = n % 10;
		sum += pow(lastDigit, 2);
		n = n / 10;
	} while (n != 0);

	return sum;
}

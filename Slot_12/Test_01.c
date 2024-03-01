#include<stdio.h>

int check_prime (int n) {
	int i, divisor = 0;

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			divisor++;
	}

	if (divisor == 2) return 1;
	else return 0;
}

int check_perfect (int n) {
	int i, sum = 0;

	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}

	if (sum == n) return 1;
	else return 0;
}

int const MAX = 100;
int main () {
	int n, i, count = 0, sum = 0;
	int arr[MAX];
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		if (check_prime(arr[i]) == 1 || check_perfect(arr[i]) == 1) {
			sum = sum + arr[i];
			count = count + 1;
		}
	}

	printf("Result: %.2f", (float)sum / count);

	return 0;
}

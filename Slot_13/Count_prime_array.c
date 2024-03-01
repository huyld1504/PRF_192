#include<stdio.h>
#include<math.h>

int check_prime (int n) {
	int i, divisor = 0;

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			divisor++;
	}

	if (divisor == 2) return 1;
	else return 0;
}

int check_square (int n) {
	float square_root = sqrt(n);
	int d = square_root; 
	
	if (pow(d, 2) == n) return 1;
	else return 0;
}

int find_max_square (int arr[], int n) {
	int i, max = 1;
	
	for (i = 0; i < n; i++) {
		if (check_square(arr[i]) == 1 && arr[i] > max) {
			max = arr[i];
		}
	}
	
	return max;
}

int count_prime (int arr[], int n) {
	int i, count = 0;
	
	for (i = 0; i < n; i++) {
		if (check_prime(arr[i]) == 1) 
			count++;
	}
	
	return count;
}

int const MAX = 100;
int main () {
	int n, i, count = 0;
	scanf("%d", &n);
	int arr[MAX];
	for (i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &arr[i]);
	} 
	
	printf("So chinh phuong lon nhat trong mang: %d \n", find_max_square(arr, n));
	printf("So luong so nguyen to trong mang: %d", count_prime(arr, n));
	
	return 0;
}

#include<stdio.h>

const int MAX = 100;
int check_odd_number (int n) {	
	if (n % 2 != 0) return 1;
	else return 0;
}

int check_prime_number (int n) {
	int count = 0, i;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			count = count + 1;
		}
	}
	
	if (count == 2) return 1;
	else return 0;
}

void print_odd_array (int n, int arr[]) {
	int i;
	for (i = 0; i < n; i++) {
		if (check_odd_number(arr[i]) == 1)
			printf("%5d", arr[i]);
	}
}

int main () {
	int n;
	scanf("%d", &n);
	
	int arr[MAX];
	int i;
	for (i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Output: \n");
	//Bai 0:
//	printf("Bai so 0: \n");
//	for (i = 0; i < n; i++) {
//		int result = check_odd_number(arr[i]);
//		
//		if (result == 1) {
//			printf("%d ", arr[i]);
//		}
//	}

	//Bai 1:
//	int sum = 0;
//	printf("Bai so 1: \n");
//	int count = 0;
//	for (i = 0; i < n; i++) {
//		if (check_odd_number(arr[i]) == 0) {
//			sum += arr[i];
//			count = count + 1;
//		}
//	}
//	printf("%.2f", sum/(1.0 * count));

	//Bai 2: 
//	printf("Bai so 2: \n");
//	for (i = 0; i < n; i++) {
//		if (check_prime_number(arr[i]) == 1)
//			printf("%d ", arr[i]);
//	}

	print_odd_array(n, arr[n]);
	
	return 0;
}

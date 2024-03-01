#include<stdio.h>

const int MAX = 100;
void check_sum_array (int arr[], int n) {
	int i, index;
	int max = arr[0] + arr[1] + arr[2];
	for (i = 1; i < n - 2; i++) {
		int sum = arr[i] + arr[i + 1] + arr[i + 2];
		if (sum > max) {
			index = i;
			max = sum;
		}
	}
	printf("Output: %d %d %d", arr[index], arr[index + 1], arr[index + 2]);
}

int main () {
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	int arr[MAX];

	for (i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	check_sum_array(arr, n);

	return 0;
}

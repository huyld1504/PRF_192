#include<stdio.h>

int main () {
	// 1.Declare array
	int arr[100];  //maximum volume of this array
	int n, i; //the number of array in reality

	// 2. Declare information of cell of this array
	printf("Input n: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	// 3. Print the array out.
	printf("Array arr: \n");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}

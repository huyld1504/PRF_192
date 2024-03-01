#include<stdio.h>
#include<math.h>

const int MAX = 100;

int isEvenNumber (int n) {
	if (abs(n) % 2 == 0) return 1;
	else return 0;
}

int isPrimeNumber (int n) {
	int i, count = 0;

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}

	if (count == 2) return 1;
	else return 0;
}

int pickPrimeNumberByIndex (int index) {
	int i, number, count = 0;

	for (i = 2; count <= index; i++) {
		if (isPrimeNumber(i) == 1) {
			count = count + 1;
			number = i;
		}
	}

	return number;
}

int sumArrToNumber (int a[], int n) {
	int i, result = 0, j = n - 1;

	for (i = 0; i < n; i++) {
		result = result * 10 + a[i];
		j--;
	}

	return result;
}

int isSymmetricalNumber (int n) {
	int result = 0, d;

	while (n != 0) {
		d = n % 10;
		result = result * 10 + d;
		n = n / 10;
	}

	return result;
}

void intputArr (int a[], int *n) {
	printf("Nhap n: ");
	scanf("%d", n);

	int i;
	for (i = 0; i < *n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void findMaxEvenArr (int a[], int n) {
	int i, success = 0;
	int min = a[0];

	for (i = 1; i < n; i++) {
		if (a[i] < min) min = a[i];
	}

	int max = min;
	for (i = 0; i < n; i++) {
		if (isEvenNumber(a[i]) == 1 && a[i] > max) {
			max = a[i];
			success = 1;
		}
	}
	printf("Bai 1: \n");
	if (success == 1) printf("So chan lon nhat trong mang: %d \n", max);
	else printf("Khong co so chan nao trong mang!!! \n");
}

void findSumOfAveragePrimeArr (int a[], int n) {
	int i, sum = 0, count = 0;

	for (i = 0; i < n; i++) {
		if (isPrimeNumber(a[i]) == 1) {
			sum += a[i];
			count++;
		}
	}

	printf("Bai 2: \n");
	if (count > 0)
		printf("Trung binh cong cac so nguyen to trong mang: %.2f \n", (float) sum / count);
	else
		printf("Trung binh cong cac so nguyen to trong mang: 0 \n");
}

void createFibonacci (int a[], int n) {
	int i;
	a[0] = 1;
	a[1] = 1;

	for (i = 2; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}

	printf("Bai 3:\n%d so fibonacci: ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void findSumOfAverageMaxMin (int a[], int n) {
	int i, min = a[0], max = a[0];

	for (i = 1; i < n; i++) {
		if (a[i] < min) min = a[i];
	}

	for (i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
	}

	printf("Bai 4:\nTrung binh cong 2 so max va min trong mang: %.2f \n", (max + min) / 2.0);
}

void findIndexByValue (int a[], int n, int *x) {
	int i, index;

	printf("Bai 5:\nNhap so nguyen x: ");
	scanf("%d", x);

	printf("Vi tri cua so nguyen x trong mang: ");
	for (i = 0; i < n; i++) {
		if (a[i] == *x) {
			index = i;
			printf("%d ", index);
		}
	}
	printf("\n");
}

void swapMaxToMin (int a[], int n) {
	int i, min = a[0], max = a[0];

	for (i = 1; i < n; i++) {
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	}

	for (i = 0; i < n; i++) {
		if (a[i] == max) a[i] = min;
	}

	printf("Mang sau khi swap: ");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
}

void swapPrimeNumberByIndex (int a[], int n) {
	int i, min = a[0], index = 1;

	for (i = 1; i < n; i++) {
		if (a[i] < min) min = a[i];
	}

	for (i = 0; i < n; i++) {
		if (a[i] == min) {
			a[i] = pickPrimeNumberByIndex(i);
		}
	}

	printf("Mang sau khi thay doi gia tri: ");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void isSymmetricalArr (int a[], int n) {
	int number = sumArrToNumber(a, n);
	int isSymmetric = isSymmetricalNumber(number);

	printf("Bai 8: \n");
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	if (isSymmetric == number) printf("This is symmetrical array!!! \n");
	else printf("This is not symmetrical array!!! \n");
}

int main () {
	int arr[MAX], a[MAX], aSwap[MAX], aSwapPrime[MAX], n, x;
	intputArr(arr, &n);

	//Bai 1:
	findMaxEvenArr(arr, n);

	//Bai 2:
	findSumOfAveragePrimeArr(arr, n);

	//Bai 3:
	createFibonacci(a, n);

	//Bai 4:
	findSumOfAverageMaxMin(arr, n);

	//Bai 5:
	findIndexByValue(arr, n, &x);

	//Bai 6:
	printf("Bai 6: \n");
	intputArr(aSwap, &n);
	swapMaxToMin(aSwap, n);

	//Bai 7:
	printf("Bai 7: \n");
	intputArr(aSwapPrime, &n);
	swapPrimeNumberByIndex(aSwapPrime, n);

	//Bai 8:
	isSymmetricalArr(arr, n);

	return 0;
}

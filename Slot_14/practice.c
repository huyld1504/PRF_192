#include<stdio.h>
#include<stdlib.h>
#include<math.h>

const int MAX = 100;

int isEven (int n) {
	return abs(n) % 2 == 0;
}

int isMinimumArr (int a[], int n) {
	int i, min = a[0];
	
	for (i = 0; i < n; ++i) {
		if (a[i] < min) min = a[i];
	}
	
	return min;
}

int isMaximumArr (int a[], int n) {
	int i, max = a[0];
	
	for (i = 0; i < n; ++i) {
		if (a[i] > max) max = a[i];
	}
	
	return max;
}

int isPrime (int n) {
	int i, count = 0;
	
	for (i = 1; i <= n; i++) {
		if (n % i == 0) count++;
	}
	
	return count == 2;
}

int printPrimeNumberByPosition (int index) {
	int i, pos = 0, result;
	
	for (i = 2; pos <= index; ++i) {
		if (isPrime(i) == 1) {
			pos++;
			result = i;
		}
	}
	
	return result;

}

int convertArrToNumber (int a[], int n) {
	int i, result;
	
	for (i = 0; i < n; ++i) {
		result = result * 10 + a[i];
	}
	
	return result;
}

int isSymmetricalNumber (int n) {
	int d, result = 0, clone = n;
	
	while (n != 0) {
		d = n % 10;
		result = result * 10 + d;
		n = n / 10;
	}
	
	return result == clone;
}

void inputArr (int a[], int *n) {
	printf("Input n: ");
	scanf("%d", n);
	
	int i;
	for (i = 0; i < *n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void solveNumber1 (int a[], int n) {
	int i;
	int max = isMinimumArr(a, n);
	
	for (i = 0; i < n; i++) {
		if (isEven(a[i]) == 1 && a[i] > max)
			max = a[i];
	}
	printf("Result: %d \n", max);
}

void solveNumber2 (int a[], int n) {
	int i, primeQuantity = 0, sum = 0;
	
	for (i = 0; i < n; i++) {
		if (isPrime(a[i]) == 1) {
			sum += a[i];
			primeQuantity++;
		}
	}
	
	float result = primeQuantity == 0 ? 0 : (sum + 0.0) / primeQuantity;
	printf("Result: %lf \n", result);
}

void solveNumber3 (int a[], int n) {
	int i;
	a[0] = 1;
	a[1] = 1;
	
	printf("Result: %d %d ", a[0], a[1]);
	for (i = 2; i < n; ++i) {
		a[i] = a[i - 1] + a[i - 2];
		printf("%d ", a[i]);
	}
	printf("\n");
}

void solveNumber4 (int a[], int n) {
	int min = isMinimumArr(a, n);
	int max = isMaximumArr(a, n);
	
	printf("Result: %d \n", (min + max) / 2);
}

void solveNumber5 (int a[], int n, int *x) {
	scanf("%d", x);
	int i;
	
	printf("Result: ");
	for (i = 0; i < n; ++i) {
		if (a[i] == *x) printf("%d ", i);
	}
	printf("\n");
}

void solveNumber6 (int a[], int n) {
	int min = isMinimumArr(a, n);
	int max = isMaximumArr(a, n);
	int i;
	
	for(i = 0; i < n; ++i) {
		if (a[i] == max) a[i] = min;
	}
	
	printf("Result: ");
	for (i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void solveNumber7 (int a[], int n) {
	int i;
	int min = isMinimumArr(a, n);
	
	for (i = 0; i < n; ++i) {
		if (a[i] == min) a[i] = printPrimeNumberByPosition(i);
	}
	
	printf("Result: \n");
	for (i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void solveNumber8 (int a[], int n) {
	int convertArr = convertArrToNumber(a, n);
	isSymmetricalNumber(convertArr) == 1 ? printf("True \n") : printf("False");
}

int main () {
	int a[MAX], n, arrayFibonacci[MAX], arr[MAX], x;
	
	inputArr(a, &n);
	
	printf("Bai 1: \n");
	solveNumber1(a, n);
	
	printf("Bai 2: \n");
	solveNumber2(a, n);
	
	printf("Bai 3: \n");
	solveNumber3(arrayFibonacci, n);
	
	printf("Bai 4: \n");
	solveNumber4(a, n);
	
	printf("Bai 5: \n");
	solveNumber5(a, n, &x);
	
	printf("Bai 6: \n");
	solveNumber6(a, n);
	
	printf("Bai 7: \n");
	inputArr(arr, &n);
	solveNumber7(arr, n);
	
	printf("Bai 8: \n");
	solveNumber8(a, n);

	return 0;
}

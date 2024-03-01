#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Calculate the average of the sum of the fibonanci number that is less than the natural number
int fibonanci (int n) {
	int f_0 = 0, f_1 = 1, f_n = 1, i;

	if (n == -1)
		return -1;
	else if (n == 0 || n == 1)
		return n;
	else {
		for (i = 2; i < n; i++) {
			f_0 = f_1;
			f_1 = f_n;
			f_n = f_1 + f_0;
		}
	}

	return f_n;
}

int main () {
	int n, i, j, sum = 0;
	scanf("%d", &n);
	//Print n of the fibonanci number
	for (j = 0; j < n; j++) {
		int number = fibonanci(j);

		printf("%d ", number);
	}
	printf("\n");
	//Average of sum of fibonanci
	i = n;
	do {
		sum += fibonanci(i);
		i = i - 1;
	} while (i < 0);
	float average = (float) sum / n;
	printf("%.2f", average);

	return 0;
}

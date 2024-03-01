//Calculate: S(n) = 1 - 2 + 3 - 4 + ... + (-1)^(n + 1) * n, n > 0

#include<stdio.h>
#include<math.h>

int main () {
	int n, i, sum = 0;
	printf("Input:");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		sum += pow(-1, i + 1) * i;
	}
	
	printf("Output: %d", sum);
	
	return 0;
}

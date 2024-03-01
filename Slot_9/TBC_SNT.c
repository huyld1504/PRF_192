#include<stdio.h>
#include<stdlib.h>

int main () {
	int n, count = 0;
	scanf("%d", &n);
	float tbc = 0;
	int k, i, sum = 0;
	for (k = 2; count != n ; k = k + 1) {
		int uoc = 0;
		for (i = 1; i <= k; i = i + 1) {
			if (k % i == 0) {
				uoc = uoc + 1;
			}
		}
		
		if (uoc == 2) {
			sum = sum + k;
			count = count + 1;
		}
		
	}
	tbc = (sum * 1.0) / n;
	
	printf("%.2f", tbc);
	
	return 0;
}

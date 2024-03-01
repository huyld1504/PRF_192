#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float sum (int n, int k) {
	int i, j, h = n, tu, mau;
	float result = 0;
	
	for (i = 0; i <= n - 1; i++) {
		tu = pow(k, i);
		mau = 0;
		for (j = 1; j <= h; j++) {
			mau += j;
		}
		result += (tu * 1.0) / mau;
		h = h - 1;
	}
	
	return result;
}

int main () {
	int n, k;
	scanf("%d%d", &n, &k);
	
	float result = sum(n, k);
	
	printf("%.2f", result);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
	int n, k, i, j, tu, mau;
	float sum = 0;
	scanf("%d%d", &n, &k);
	int h = n;
	for (i = 0; i <= n - 1; i = i + 1) {
		tu = pow(k, i);
		mau = 0;
		for (j = 1; j <= h; j = j + 1) {
			mau += j;
		}
		sum += tu / (float)mau;
		h = h - 1;
	} 
	
	printf("%.2f", sum);
	
	return 0;
}

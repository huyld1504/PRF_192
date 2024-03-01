#include<stdio.h>
#include<stdlib.h>

int main () {
	int n, i, h, k, tu, mau;
	float result = 0.0;
	scanf("%d", &n);	
	
/*
	for (i = 1; i <= n; i++) {
		tu += i;
		mau = 1;
		for (k = 1; k <= n + 1 - i; k++) {
			mau *= k;
		}
		
		result += (float)tu/mau;
	}
*/
	h = n;
	for (i = 1; i <= n; i = i + 1) {
		tu += i;
		mau = 1;
		for (k = h; k > 0; k = k - 1) {
			mau = mau * k;
		}
		h = h - 1;
		result += (float)tu / mau;
	}
	
	printf("%.2f", result);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
//tinh tong dang (1+2+3+...+n)/(n/(n+1))

int main () {
	int n, i, tu = 0, mau = 1;
	float result = 0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		tu = tu + i;
		mau = i * (i +1);
		result = result + tu / (float)mau;
	}
	
	printf("%.1f", result);
	
	return 0;
}

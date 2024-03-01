#include<stdio.h>
#include<stdlib.h> 

int main () {
	int n, tong = 0;
	scanf("%d", &n);
	
	int i, k, count = 0;
	for (i = 6; count != n; i = i + 1) {
		int tong_uoc = 0;
		for (k = 1; k <= i; k = k + 1) {
			if (i % k == 0) {
				tong_uoc = tong_uoc + k;
			}
		}
		
		if (tong_uoc == i) {
			tong = tong + i;
			count = count + 1;
		}
	}
	
	printf("%d", tong);
	
	return 0;
}

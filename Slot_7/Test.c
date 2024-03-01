#include<stdio.h>
#include<stdlib.h>
//Tinh trung binh cong cac so hoan hao co trong doan [a;b] voi a, b la 2 so nguyen duong, a < b 

int main () {
	int a, b, sum = 0, count = 0, n, i, j;
	scanf("%d%d", &a, &b);
	
	for (i = a; i <= b; i++) {
		n =0;
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				n += j;
			}
		}
		if (n == i) {
			sum += i;
			count++;
		}
	}
	
	printf("%.2f", (sum*1.0)/count);
	
	return 0;
}

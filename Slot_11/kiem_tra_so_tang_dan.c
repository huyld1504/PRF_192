#include<stdio.h>
#include<math.h>

int kiem_tra_so_tang_dan (int n) {
	int tMax = n % 10;
	n = n / 10;
	int d;
	do {
		d = n % 10;
		if (d <= tMax) return 1;
		
		tMax = d;
		n = n / 10;
	} while (n != 0);
	
	return 0;
}

int main () {
	int n;
	scanf("%d", &n);

	int result = kiem_tra_so_tang_dan(n);

	printf("%d", result);
	return 0;
}

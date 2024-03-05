#include<stdio.h>

int kiemTraSoXuatHienNhieuNhat (int n) {
	int a[10];
	int i, d, num = n;
	
	for (i = 0; i < 10; i++) {
		a[i] = 0;
	}
	
	for (i = 0; i < 10; i++) {
		while (num > 0) {
			d = num % 10;
			if (d == i) a[i] += 1;
			num = num / 10;
		}
		num = n;
	}
	
	int max = a[0];
	int max_digit = 0;
	
	for (i = 1; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	
	int min = 9;
	for (i = 0; i < 10; i++) {
		if (a[i] == max && i < min) min = i;
	}

	return min;
}

int main () {
	int n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int result = kiemTraSoXuatHienNhieuNhat(n);	
	printf("So xuat hien nhieu nhat: %d", result);
	
	return 0;
	
}

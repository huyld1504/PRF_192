#include<stdio.h>
#include<stdlib.h>
//Tinh tong cac so nguyen to trong doan a den b (a,b cho nguoi dung nhap vao tuy y).

int main () {
	int a, b, i, j, count, sum = 0;
	scanf("%d%d", &a, &b);
	
	for (i = a; i <= b; i++) {
		count = 0;
		for (j = 1; j <= i; j ++) 
			if (i % j == 0) 
				count++;
		
		if (count == 2) 
			sum += i;
	}
	
	printf("%d", sum);

	return 0;
}

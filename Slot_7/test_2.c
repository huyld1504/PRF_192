#include<stdio.h>
#include<stdlib.h>
//Kiem tra so nguyen duong n co toan chu so chan hay khong

int main () {
	int n, u, result = 0;
	scanf("%d", &n);
	
	do {
		u = n % 10;
		if (u % 2 == 0) {
			result = 0;
		} else {
			result = 1;
		}	
	} while (n = 0);
	
	result == 0 ? printf("True") : printf("False");
	
	return 0;
}

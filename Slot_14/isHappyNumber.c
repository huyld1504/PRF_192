#include<stdio.h>

int isHappyNumber (int n) {
	int num = n, d, new_number = 0, i;
	
	for (i = 0; i < 100; i++) {
		while (num != 0) {
			d = num % 10;
			new_number += pow(d, 2);
			num = num / 10;		
		}
		num = new_number;
		new_number = 0;
	}

	return num == 1;
}

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int happyNumber = isHappyNumber(n);
	
	if (happyNumber == 1) printf("Happy Number");
	else printf("Unhappy Number");
	
	return 0;
}

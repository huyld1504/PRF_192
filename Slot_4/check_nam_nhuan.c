#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if (n%400 == 0 || (n%4 == 0 && n%100 != 0)) {
		printf("Nam nhuan");
	} else {
		printf("Nam khong nhuan");
	}
	
	return 0;
}

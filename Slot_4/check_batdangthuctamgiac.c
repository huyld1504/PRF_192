#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	if (a+b > c && a+c > b && b+c > a) {
		printf("True");
	} else {
		printf("False");
	}
	
//	a+b > c && a+c > b && b+c > a ? printf("True") : printf("False");
	
	return 0;
}

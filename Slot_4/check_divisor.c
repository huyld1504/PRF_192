#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);
	
//	int divisor = b % a;
//	
//	if (divisor == 0) printf("True");
//	else printf("False");

	b%a==0 ? printf("True") : printf("False");
	
	return 0;
}

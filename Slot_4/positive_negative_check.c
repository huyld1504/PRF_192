#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	
	if (n == 0) printf("Zero");
	else if (n<0) printf("Negative");
	else printf("Positive");
	
	return 0;
}

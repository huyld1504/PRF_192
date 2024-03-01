#include<stdio.h>

int main () {
	int i;
	int count = 0;
	
	for (i = 13; i <= 100; i += 13) 
		count++;
	
	printf("%d", count);
	
	return 0;
}

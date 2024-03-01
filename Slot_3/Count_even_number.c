#include<stdio.h>

int main(){
	int a, b;
	printf("a =");
	scanf("%d", &a);
	printf("b =");
	scanf("%d", &b);
	
	int so_doan = (b - a) + 1;
	int so_chan = so_doan / 2;
	
	printf("Co: %d so chan", so_chan);
	
	return 0;
}

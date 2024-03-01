#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("Input:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	double C = a+b+c;
	double p = C/2;
	double s = sqrt((p*(p-a)*(p-b)*(p-c)));
	
	printf("Output: %.lf %.3lf", C, s);
	
	return 0;
}

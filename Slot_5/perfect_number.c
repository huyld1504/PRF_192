#include<stdio.h>
//Kiem tra so hoan hao
int main () {
	int n, i;
	scanf("%d", &n);
	
	int sum = 0;
	
	for (i = 1; i < n; i++) 
		if(n % i == 0) sum += i;
		
	if (sum == n) {
		printf("YES");
	} else {
		printf("NO");
	}

//	sum == n ? printf("YES") : printf("NO");
	
	return 0;
}

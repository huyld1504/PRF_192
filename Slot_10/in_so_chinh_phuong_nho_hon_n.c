#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Print the perfect square number that is less than the natural N
int check_perfect_square_number(int n) {
	int d = sqrt(n);
	
	if (pow(d, 2) == n) 
		return 1;
	else 
		return 0;
}
void output(int n) {
	int i;
	
	for (i = 1; i <= n; i++) {
		int psn = check_perfect_square_number(i);
		
		if (psn == 1) 
			printf("%d ", i);
	}
};

int main () {
	int n;
	scanf("%d", &n);
	
	output(n);
	
	return 0;
}




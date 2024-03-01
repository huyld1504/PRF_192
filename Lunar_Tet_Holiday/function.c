#include<stdio.h>
#include<math.h>

int count_digit_N (int n);

int main () {
	int n;
	printf("Input:"); 
	scanf("%d", &n);
	
	//Write the function that allow user input a positive N and count the digit of it.
	int output_1 = count_digit_N(n);
	printf("Output: %d", output_1);
	
	return 0;
}

//Write the function that allow user input a positive N and count the digit of it.
int count_digit_N (int n) {
	int d, count = 0;
	do {
		count += 1;
		n = n / 10;
	} while (n != 0);
	
	return count;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int count_digit_number(int n);
void in_so_chinh_phuong(int n);
int kiem_tra_so_chinh_phuong(int n);

int main () {
	int n;
	scanf("%d", &n);
	
	int count = count_digit_number(n);
	printf("dem so chu so trong so tu nhien n:%d \n", count);
	
	printf("In ra so chinh phuong co n chu so: ");
	in_so_chinh_phuong(n);
	
	return 0;
}

//dem so chu so trong so tu nhien n
int count_digit_number(int n) {
	int count = 0;
	
	do {
		n = n / 10;
		count = count + 1;
	} while (n != 0);
	
	return count;
}

//kiem tra so n co phai la so chinh phuong khong
int kiem_tra_so_chinh_phuong(int n) {
	float f = sqrt(n);
	int d = f; 
	
	if (d * d == n) return 1;
	else return 0; 
}

//In ra so chinh phuong co n chu so
void in_so_chinh_phuong(int n) {
	int i;
	int start = pow(10, n - 1);
	int end = pow(10, n) - 1;
	
	if (n == 1) printf("0 ");
	for (i = start; i <= end; i++) {
		int check = kiem_tra_so_chinh_phuong(i);
		if (check == 1) {
			printf("%d ", i);
		}
	}
}

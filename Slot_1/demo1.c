#include<stdio.h>

int main (void) {
	
//	int cd = 8;
//	int cr = 9;
//	
//	int p = (cd + cr) * 2;
//	int s = cd * cr;
	
//	printf("Chu vi hinh chu nhat la: %d \n", p);
	
//	printf("Dien tich hinh chu nhat la: %d", s);

	float height = 1.8;
	int weight = 80;
	
//	BMI = weight / height^2

	float bmi = weight / pow(height, 2);
	
	printf("BMI = %.2f \n", bmi);

	return 0; 
};

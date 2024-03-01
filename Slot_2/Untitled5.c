#include<stdio.h>
//Write a program to input temperature in degrees Celsius and convert to Fahrenheit, using the conversion formula

int main () {
	float temperature;
	
	printf("Nhap a:");
	scanf("%f", &temperature);
	
	float fdegree = (temperature * (float)9/5) + 32;
	printf("%f", fdegree);
	
	return 0;
}

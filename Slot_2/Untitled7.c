#include<stdio.h>
//Write a program in C that takes minutes as input, and display the total number of hours and minutes

int main () {
	
	int initial_input;
	printf("Nhap phut:");
	scanf("%d", &initial_input);
	
	int hour = initial_input / 60;
	int minute = initial_input % 60;
	printf("%d gio %d phut", hour, minute);
	
	return 0;
}

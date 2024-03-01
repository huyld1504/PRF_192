#include<stdio.h>
#include<stdlib.h>

int main () {
	int cDai, cRong;
	
	printf("Tinh dien tich hinh chu nhat \n");
	printf("Nhap chieu dai:");
	scanf("%d", &cDai);
	printf("Nhap chieu rong:");
	scanf("%d", &cRong);
	
	printf("Dien tich = %d", cDai * cRong);
	
	return 0;
}

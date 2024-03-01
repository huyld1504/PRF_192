#include<stdio.h>
//Cho input la mot so co 3 chu so tu 100 den 999. Tinh tong cua 3 chu so tren.

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	
//	int hang_tram = n/100;
//	int hang_chuc = (n - hang_tram*100)/10;
//	int hang_don_vi = (n - hang_tram*100 - hang_chuc*10);
//	int sum = hang_tram + hang_chuc + hang_don_vi;

	int hang_tram = n/100;
	int hang_chuc = (n % 100) /10;
	int hang_don_vi = (n % 100) % 10;
	int sum = hang_tram + hang_chuc + hang_don_vi;
	
	printf("Tong: %d", sum);
	
	return 0;
} ;

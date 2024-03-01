#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//cho nguoi dung nhap vao mot mang bat ki tu ban phim
int main () {
//	int size, index;
//	printf("Input array's size:");
//	scanf("%d", &size);
	int index;
	int array[10];
	
	for (index = 0; index < 10; index++) {
		printf("Nhap a[%d] : ", index);
		scanf("%d", &array[index]);
	}
	
	
	return 0;
}

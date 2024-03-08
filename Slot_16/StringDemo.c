#include<stdio.h>
#include<string.h>

int checkAnphabet (char c) {
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') 
		return 1;
	else return 0;
}

int countNumber (char s[]) {
	int count = 0, i;
	int n = strlen(s);
	for (i = 0; i < n; i++) {
		if (s[i] >= '0' && s[i] <= '9') 
			count++;
	}
	
	return count;
}

int countAnpabet (char s[]) {
	int count = 0, i;
	int n = strlen(s);
	
	for (i = 0; i < n; i++) {
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') 
			count++;
	}
	
	return count;
}

int main () {
	char name[50];
	//read string without space
	gets(name);
	//scanf("%s", &name);
	
	printf("Name: %s \n", name);
}

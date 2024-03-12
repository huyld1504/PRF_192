#include<stdio.h>
#include<string.h>

int main () {
	char s[1000];
	gets(s);
	
	int length = strlen(s);
	int i;
	for (i = 0; i < length; i++) {
		s[i] = toupper(s[i]);
	}
	
	printf("%s", s);
	
	return 0;
}

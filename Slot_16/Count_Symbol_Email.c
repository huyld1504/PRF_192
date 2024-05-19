#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int checkAlpha (char c) {
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A') return 1;
	else return 0;
}

int isEven (int n) {
	return n % 2 == 0;
}

int checkNumb (char c) {
	if (c <= '9' && c >= '0') return 1;
	else return 0;
}

int checkSpecialSymb (char c) {
	if (checkNumb(c) == 0 && checkAlpha(c) == 0) return 1;
	else return 0;
}

int main () {
	char s[100];
	int count_alpa = 0, count_numeric = 0, count_other = 0;
	gets(s);
	int n = strlen(s), i;
	
	for (i = 0; i < n; i++) {
		if (checkAlpha(s[i])) {
			count_alpa = count_alpa + 1;
		} else if (checkNumb(s[i])) {
			count_numeric = count_numeric + 1;
		} else {
			count_other = count_other + 1;
		}
	}
	
	printf("Alphabet: %d \n", count_alpa);
	printf("Numeric: %d \n", count_numeric);
	printf("Others: %d \n", count_other);
	return 0;
}
